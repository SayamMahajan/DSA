#include<iostream>
using namespace std;

int pow1(int m ,int n){
    if(n==0){
        return 1;
    }
    return pow1(m, n-1)*m;
}

//better solution -- less multiplication
int pow2(int m, int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return pow2(m*m, n/2);
    }
    else{
        return m*pow2(m*m, (n-1)/2);
    }
}
int main(){
    int num1, num2;
    cout<<"Enter a number: ";
    cin>>num1;
    cout<<"Enter the power: ";
    cin>>num2;
    cout<<pow1(num1, num2)<<endl;
    return 0;
}