import time,csv
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
with open("fibo_benchmark_python.csv","w",newline="") as f:
    w=csv.writer(f);w.writerow(["n","fib","rec_ms","it_ms"])
    for n in range(30+1):
        val=fibo_iterative(n)
        rec=time_ms(fibo_recursive,n,3)
        it=time_ms(fibo_iterative,n,3)
        w.writerow([n,val,rec,it])
        if 40<=n<=50: print(f"fibo({n})={val}")
print("Wrote fibo_benchmark_python.csv")
