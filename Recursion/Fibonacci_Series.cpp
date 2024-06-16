#include<iostream>
using namespace std;

int fib1(int n){
    if(n<=1){
        return n;
    }
    return fib(n-2) + fib(n-1); //O(2^n) when func called itself twice to parameter n-1
}

//using iterative loops
int fib2(int n){
    int to=0, t1=1, s;
    
}

int main(){
    
    return 0;
}