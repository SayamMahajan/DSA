#include<iostream>
using namespace std;

void fun(int n){
    if (n>0){
        cout<<n<<" ";
        fun(n-1);
        fun(n-1);
    }
    
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    fun(num);
    return 0;
}
// tree rec - function calling itself more than once