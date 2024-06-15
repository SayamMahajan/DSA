#include<iostream>
using namespace std;

void fun(int n){
    if (n>0){
        cout<<n<<" ";
        fun(n-1);  //recursion occurs at last
    }
    
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    fun(num);
    return 0;
}

//loap can be performed instead of tail recursion due to space complexity