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

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<fact(num)<<endl;
    return 0;
}