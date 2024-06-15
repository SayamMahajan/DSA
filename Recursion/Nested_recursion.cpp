#include<iostream>
using namespace std;

int fun(int n){
    if(n>100){
        return n-10;
    }
    else{
        return fun(fun(n+11));
    }
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<fun(num)<<endl;
    return 0;
}