#!/usr/bin/env python3
"""
One-click Fibonacci benchmark runner.
- Builds and runs C++ and Python Fibonacci benchmarks
- Records recursive vs iterative timings
- Merges results into CSV
- Plots with matplotlib
"""

import os, sys, subprocess, csv, shutil, time

NMAX   = 30     # reduce if recursive too slow, can go to 45/50 on faster PCs
TRIALS = 3
CPP_CSV = "fibo_benchmark_cpp.csv"
PY_CSV  = "fibo_benchmark_python.csv"
MERGED  = "fibo_both.csv"
PNG     = "fibo_both.png"

# ------------------ helpers ------------------

def run(cmd):
    print(">", " ".join(cmd))
    return subprocess.run(cmd, check=True)

def cpp_source():
    return f"""#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
using namespace std::chrono;
long long fibo_recursive(int n){{return n<=1?1:fibo_recursive(n-1)+fibo_recursive(n-2);}}
long long fibo_iterative(int n){{if(n<=1)return 1;long long a=1,b=1;for(int i=2;i<=n;i++){{long long c=a+b;a=b;b=c;}}return b;}}
long long time_rec(int n){{auto t0=high_resolution_clock::now();volatile long long v=fibo_recursive(n);auto t1=high_resolution_clock::now();return duration_cast<milliseconds>(t1-t0).count();}}
long long time_it (int n){{auto t0=high_resolution_clock::now();volatile long long v=fibo_iterative(n);auto t1=high_resolution_clock::now();return duration_cast<milliseconds>(t1-t0).count();}}
int main(){{
  ofstream csv("{CPP_CSV}");csv<<"n,fib,rec_ms,it_ms\\n";
  for(int n=0;n<={NMAX};n++){{long long val=fibo_iterative(n);
    long long rec=0,it=0;for(int t=0;t<{TRIALS};t++){{rec+=time_rec(n);it+=time_it(n);}}
    csv<<n<<","<<val<<","<<(rec/(double){TRIALS})<<","<<(it/(double){TRIALS})<<"\\n";
    if(n>=40&&n<=50) cout<<"fibo("<<n<<")="<<val<<"\\n";}}
}}
"""

def py_source():
    return f"""import time,csv
def fibo_recursive(n): return 1 if n<=1 else fibo_recursive(n-1)+fibo_recursive(n-2)
def fibo_iterative(n):
    if n<=1: return 1
    a,b=1,1
    for _ in range(2,n+1): a,b=b,a+b
    return b
def time_ms(fn,n,trials=3):
    total=0.0
    for _ in range(trials):
        t0=time.perf_counter();fn(n);t1=time.perf_counter()
        total+=(t1-t0)*1000.0
    return total/trials
with open("{PY_CSV}","w",newline="") as f:
    w=csv.writer(f);w.writerow(["n","fib","rec_ms","it_ms"])
    for n in range({NMAX}+1):
        val=fibo_iterative(n)
        rec=time_ms(fibo_recursive,n,{TRIALS})
        it=time_ms(fibo_iterative,n,{TRIALS})
        w.writerow([n,val,rec,it])
        if 40<=n<=50: print(f"fibo({{n}})={{val}}")
print("Wrote {PY_CSV}")
"""

# ------------------ main ------------------

def main():
    # Write source files
    open("fibo_bench.cpp","w").write(cpp_source())
    open("fibo_bench.py","w").write(py_source())

    # Compile + run C++
    if shutil.which("g++"):
        run(["g++","fibo_bench.cpp","-O2","-o","fibo_bench"])
        run(["./fibo_bench"])
    else:
        print("g++ not found — skipping C++")

    # Run Python bench
    run([sys.executable,"fibo_bench.py"])

    # Merge CSVs
    if os.path.exists(CPP_CSV) and os.path.exists(PY_CSV):
        with open(CPP_CSV) as f: cpp={int(r["n"]):(r["rec_ms"],r["it_ms"]) for r in csv.DictReader(f)}
        with open(PY_CSV)  as f: py ={int(r["n"]):(r["rec_ms"],r["it_ms"]) for r in csv.DictReader(f)}
        ns=sorted(set(cpp)&set(py))
        with open(MERGED,"w",newline="") as f:
            w=csv.writer(f);w.writerow(["n","cpp_rec","cpp_it","py_rec","py_it"])
            for n in ns: w.writerow([n,*cpp[n],*py[n]])
        print("Wrote",MERGED)

    # Plot with matplotlib
    try:
        import matplotlib.pyplot as plt
        with open(MERGED if os.path.exists(MERGED) else PY_CSV) as f:
            rows=list(csv.DictReader(f))
        xs=[int(r["n"]) for r in rows]
        if "cpp_rec" in rows[0]:
            plt.plot(xs,[float(r["cpp_rec"]) for r in rows],"o-",label="C++ Recursive")
            plt.plot(xs,[float(r["cpp_it"]) for r in rows],"o-",label="C++ Iterative")
            plt.plot(xs,[float(r["py_rec"]) for r in rows],"o-",label="Python Recursive")
            plt.plot(xs,[float(r["py_it"]) for r in rows],"o-",label="Python Iterative")
        else:
            plt.plot(xs,[float(r["rec_ms"]) for r in rows],"o-",label="Python Recursive")
            plt.plot(xs,[float(r["it_ms"]) for r in rows],"o-",label="Python Iterative")
        plt.yscale("log");plt.xlabel("n");plt.ylabel("Time (ms)")
        plt.title("Fibonacci Benchmark");plt.grid(True);plt.legend()
        plt.savefig(PNG,dpi=150);print("Wrote",PNG)
    except ImportError:
        print("matplotlib not installed. Run: pip install matplotlib")

if __name__=="__main__":
    main()
