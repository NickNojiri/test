from __future__ import annotations
from typing import List, Callable
from dataclasses import dataclass
import time
import csv

# ----- Fibonacci (CECS 342 convention: F(0) = F(1) = 1) -----
class Fibonacci:
    @staticmethod
    def recursive(index: int) -> int:
        if index <= 1:
            return 1
        return Fibonacci.recursive(index - 1) + Fibonacci.recursive(index - 2)

    @staticmethod
    def iterative(index: int) -> int:
        if index <= 1:
            return 1
        a, b = 1, 1  # a = F(n-2), b = F(n-1)
        for _ in range(2, index + 1):
            a, b = b, a + b
        return b

# ----- Stopwatch -----
class Stopwatch:
    def __init__(self) -> None:
        self._start = 0.0

    def start(self) -> None:
        # perf_counter is better for timing short intervals
        self._start = time.perf_counter()

    def elapsed_ms(self) -> float:
        # MUST return a float; parentheses ensure correct order of operations
        return (time.perf_counter() - self._start) * 1000.0

# ----- Result row -----
@dataclass
class ResultRow:
    index: int
    fibo_value: int
    recursive_ms_elapsed: float
    iterative_ms_elapsed: float

# ----- CSV writer -----
class CsvWriter:
    def __init__(self, filename: str) -> None:
        self.filename = filename

    def write(self, rows: List[ResultRow]) -> None:
        with open(self.filename, 'w', newline="") as f:
            w = csv.writer(f)
            w.writerow(['n', 'fib_value', 'recursive_avg_ms', 'iterative_avg_ms'])
            for r in rows:
                w.writerow([r.index, r.fibo_value, r.recursive_ms_elapsed, r.iterative_ms_elapsed])

# ----- Benchmark -----
class Benchmark:
    def __init__(self, max_index: int, trials: int) -> None:
        self.max_index = max_index
        self.trials = trials

    @staticmethod
    def time_once(func: Callable[[int], int], index: int) -> float:
        sw = Stopwatch()
        sw.start()
        _ = func(index)  # do the work; ignore the value
        return sw.elapsed_ms()  # MUST return a float

    @staticmethod
    def average_time(func: Callable[[int], int], index: int, trials: int) -> float:
        total = 0.0
        for _ in range(trials):
            total += Benchmark.time_once(func, index)
        return total / trials  # return AFTER the loop

    def run(self) -> List[ResultRow]:
        rows: List[ResultRow] = []
        for index in range(self.max_index + 1):
            # Use the fast iterative version to get the canonical value
            value = Fibonacci.iterative(index)
            rec_ms = self.average_time(Fibonacci.recursive, index, self.trials)
            iter_ms = self.average_time(Fibonacci.iterative, index, self.trials)

            if 1 <= index <= 50:
                print(f"fibonacci({index}) = {value}")

            rows.append(ResultRow(index, value, rec_ms, iter_ms))
        return rows

# ----- main -----
def main() -> int:
    MAX_INDEX = 50       # required by assignment
    TRIAL_COUNT = 3

    bench = Benchmark(MAX_INDEX, TRIAL_COUNT)
    rows = bench.run()

    csv_out = "fibo_benchmark.csv"
    CsvWriter(csv_out).write(rows)
    print(f"Results written to {csv_out}")
    return 0

if __name__ == "__main__":
    raise SystemExit(main())
