#include<iostream>
using namespace std;

//here no. of multiplication depends on the o(n^2)
double e(int x, int n){
    static double p=1, f=1;
    double r;
    if(n==0){
        return 1;
    }
    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r + p/f;
    }
}

//horner's rule - o(n)
double e1(int x, int n){
    static double sum= 1;
    if(n==0){
        return sum;
    }
    sum=1+x*sum/n;
    return e1(x, n-1);
}

//using iteration
double e2(int x, int n){
    double s=1;
    double num=1, den=1;

    for (int i = 1; i <= n; i++)
    {
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
}
int main(){
    int num1, num2;
    cout<<"Enter the value of x: ";
    cin>>num1;
    cout<<"Enter the number of terms: ";
    cin>>num2;
    cout<<"The answer of Taylor Series is: "<<e(num1,num2)<<endl<<e1(num1,num2)<<endl;
    return 0;
}