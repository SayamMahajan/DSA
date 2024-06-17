#include<iostream>
using namespace std;

void tower(int n, int A, int B, int C){
    if(n>0){
        tower(n-1,A,C,B);
        cout<<"("<<A<<","<<C<<")"<<endl;
        tower(n-1,B,A,C);
    }
}

int main(){
    int num;
    cout<<"Enter the number of disk: ";
    cin>>num;
    tower(num,1,2,3);
    return 0;
}