#include<iostream>
using namespace std;

void fun(int n){
    if(n>0){
        fun(n-1);
        cout<<n<<" ";
    }
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    fun(num);
    return 0;
}