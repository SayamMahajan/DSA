#include<iostream>
using namespace std;

struct Array{
    int A[20];
    int size;
    int length;
};

// O(n^2)
void sumK(struct Array arr, int sum){
    for (int i = 0; i < arr.length-1; i++){
        for (int j = i+1; j < arr.length; j++){
            if(arr.A[i]+arr.A[j]==sum){
                cout<<arr.A[i]<<"+"<<arr.A[j]<<" = "<<sum<<endl;
            }
        }
    }
    cout<<endl;
}

int main(){
    Array arr{{13,4,5,6,1,8,2,11,10,9},10,10};
    sumK(arr, 10);
    return 0;
}