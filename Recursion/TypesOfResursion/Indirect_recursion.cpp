#include<iostream>
using namespace std;

void fun2(int n);

void fun1(int n){
    if (n>0){
        cout<<n<<" ";
        fun2(n-1);
    }
}

void fun2(int n){
    if (n>1){
        cout<<n<<" ";
        fun1(n/2);
    }
}     

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    fun1(num);
    return 0;
}