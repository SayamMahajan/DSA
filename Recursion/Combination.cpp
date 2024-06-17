#include<iostream>
using namespace std;

int fact(int n){
    if (n<0){
        cout<<"Enter a positive number"<<endl;
        return -1;
    }
    else if(n==0){
        return 1;
    }
    return fact(n-1)*n;  
}

//using formula
int C(int n, int r){
    int a,b,c;
    a=fact(n);
    b=fact(r);
    c=fact(n-r);
    return a/b*c;
}

//using pascal's triangle
int C1(int n, int r){
    if(r==0 || n==r){
        return 1;
    }
    return C1(n-1,r-1)+C1(n-1,r);
}

int main(){
    int num1,num2;
    cout<<"Enter the value of n: ";
    cin>>num1;
    cout<<"Enter the value of r: ";
    cin>>num2;
    cout<<C1(num1, num2)<<endl;
    return 0;
}