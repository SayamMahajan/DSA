#include<iostream>
using namespace std;

int sum(int n){
    if (n<0){
        cout<<"Enter a natural number"<<endl;
        return -1;
    }
    else if (n==0){
        return 0;
    }
    return sum(n-1)+n;  
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<sum(num)<<endl;
    return 0;
}