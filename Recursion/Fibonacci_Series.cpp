#include<iostream>
using namespace std;

int fib2(int n);
int fib1(int n){
    if(n<=1){
        return n;
    }
    return fib1(n-2) + fib2(n-1); //O(2^n) when func called itself twice to parameter n-1
}

//using iterative loops
int fib2(int n){
    int t0=0, t1=1, s=0;
    
    if(n<=1){
        return n;
    }
    for (int i = 2; i <=n; i++)
    {
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}

//Using memoization
int F[10];

int fib3(int n){
    if (n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2]==-1){
            F[n-2]=fib3(n-2);
        }
        if(F[n-1]==-1){
            F[n-1]=fib3(n-1);
        }
        F[n]=F[n-2] + F[n-1];
    return F[n-2] + F[n-1];
    }
}

int main(){
    for (int i = 0; i < 10; i++)
    {
        F[i]=-1;
    }
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The answer is: "<<fib3(num)<<endl;
    return 0;
}