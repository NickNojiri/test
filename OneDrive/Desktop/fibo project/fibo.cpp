//============================================================
// CECS 325 – Prog 1: Fibo Speed
// Author: Nick Nojiri
// Due Date: Thursday, Sept 4, 2025 @ Midnight
//
// Description:
//   This program benchmarks Fibonacci number generation using
//   two implementations:
//     1. Recursive (O(2^n), very slow for large n)
//     2. Iterative (O(n), efficient)
// 
//   The program measures the execution time of both methods
//   for n = 0..50, averages across multiple trials, and saves
//   the results to a CSV file ("fibo_benchmark_cpp.csv").
//
//   For assignment requirements, the program also prints
//   fibonacci(40) through fibonacci(50) to the console for
//   screenshot submission.
//
// Usage:
//   g++ fibo_bench_oop.cpp -O2 -o fibo_bench
//   ./fibo_bench
//
// Output:
//   - Console: fibonacci(40..50) values
//   - File: "fibo_benchmark_cpp.csv"
//            Columns: n, fib_value, recursive_avg_ms, iterative_avg_ms
//
// Notes:
//   * Recursive growth is exponential (O(2^n)), so runtime
//     grows very quickly for larger n.
//   * Iterative growth is linear (O(n)), so it remains fast.
//============================================================

#include <iostream>
#include <fstream>
#include <vector>
#include <chrono>
#include <string>
using namespace std;
using namespace std::chrono;

// -------------------- Fibonacci --------------------
class Fibonacci {
public:
    static long long recursive(int index) {
        if (index <= 1) return 1;
        return recursive(index - 1) + recursive(index - 2);
    }
    static long long iterative(int index) {
        if (index <= 1) return 1;
        long long prev1 = 1, prev2 = 1;
        for (int i = 2; i <= index; ++i) {
            long long current = prev1 + prev2;
            prev1 = prev2;
            prev2 = current;
        }
        return prev2;
    }
};

// -------------------- Stopwatch --------------------
class Stopwatch {
public:
    void start() { start_ = steady_clock::now(); }
    double elapsed_ms() const {
        duration<double, milli> dt = steady_clock::now() - start_;
        return dt.count();
    }
private:
    steady_clock::time_point start_;
};

// -------------------- Result row --------------------
struct ResultRow {
    int index;
    long long fib_value;
    double recursive_avg_ms;
    double iterative_avg_ms;
};

// -------------------- CSV writer --------------------
class CsvWriter {
public:
    explicit CsvWriter(const string& filename) : out_(filename, ios::out | ios::trunc) {}
    bool good() const { return out_.is_open(); }

    void write_header() {
        out_ << "n,fib_value,recursive_avg_ms,iterative_avg_ms\n";
    }
    void write_row(const ResultRow& r) {
        out_ << r.index << "," << r.fib_value << ","
             << r.recursive_avg_ms << "," << r.iterative_avg_ms << "\n";
    }
private:
    ofstream out_;
};

// -------------------- Benchmark --------------------
class Benchmark {
public:
    Benchmark(int max_index, int trials) : max_index_(max_index), trials_(trials) {}

    // time a single call (fractional ms), forcing the work to execute
    static double time_once(long long (*fn)(int), int index) {
        Stopwatch sw; sw.start();
        volatile long long result = fn(index); (void)result; // prevent optimization & warning
        return sw.elapsed_ms();
    }

    static double average_ms(long long (*fn)(int), int index, int trials) {
        double total = 0.0;
        for (int t = 0; t < trials; ++t) total += time_once(fn, index);
        return total / trials;
    }

    vector<ResultRow> run() const {
        vector<ResultRow> rows;
        rows.reserve(max_index_ + 1);

        for (int i = 0; i <= max_index_; ++i) {
            long long value = Fibonacci::iterative(i); // fast, reliable value
            double rec_ms   = average_ms(&Fibonacci::recursive, i, trials_);
            double iter_ms  = average_ms(&Fibonacci::iterative, i, trials_);

            if (i >= 40 && i <= 50) {
                cout << "fibonacci(" << i << ") = " << value << "\n";
            }

            rows.push_back(ResultRow{i, value, rec_ms, iter_ms});
        }
        return rows;
    }

private:
    int max_index_;
    int trials_;
};

// -------------------- main --------------------
int main() {
    const int MAX_INDEX   = 50; // drop to 45 if recursion feels slow
    const int TRIAL_COUNT = 3;

    Benchmark bench(MAX_INDEX, TRIAL_COUNT);
    vector<ResultRow> rows = bench.run();

    CsvWriter csv("fibo_benchmark_cpp.csv");
    if (!csv.good()) {
        cerr << "ERROR: Could not open CSV for writing.\n";
        return 1;
    }
    csv.write_header();
    for (const auto& r : rows) csv.write_row(r);

    cout << "Benchmark complete → results saved to fibo_benchmark_cpp.csv\n";
    return 0;
}
