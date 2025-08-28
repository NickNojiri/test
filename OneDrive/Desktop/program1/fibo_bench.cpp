#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
using namespace std::chrono;
long long fibo_recursive(int n){return n<=1?1:fibo_recursive(n-1)+fibo_recursive(n-2);}
long long fibo_iterative(int n){if(n<=1)return 1;long long a=1,b=1;for(int i=2;i<=n;i++){long long c=a+b;a=b;b=c;}return b;}
long long time_rec(int n){auto t0=high_resolution_clock::now();volatile long long v=fibo_recursive(n);auto t1=high_resolution_clock::now();return duration_cast<milliseconds>(t1-t0).count();}
long long time_it (int n){auto t0=high_resolution_clock::now();volatile long long v=fibo_iterative(n);auto t1=high_resolution_clock::now();return duration_cast<milliseconds>(t1-t0).count();}
int main(){
  ofstream csv("fibo_benchmark_cpp.csv");csv<<"n,fib,rec_ms,it_ms\n";
  for(int n=0;n<=30;n++){long long val=fibo_iterative(n);
    long long rec=0,it=0;for(int t=0;t<3;t++){rec+=time_rec(n);it+=time_it(n);}
    csv<<n<<","<<val<<","<<(rec/(double)3)<<","<<(it/(double)3)<<"\n";
    if(n>=40&&n<=50) cout<<"fibo("<<n<<")="<<val<<"\n";}
}
