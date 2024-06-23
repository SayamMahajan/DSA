#include<iostream>
using namespace std;

struct Array{
    int A[20];
    int size;
    int length;
};

// O(n^2)
void sumK(struct Array arr, int k){
    for (int i = 0; i < arr.length-1; i++){
        for (int j = i+1; j < arr.length; j++){
            if(arr.A[i]+arr.A[j]==k){
                cout<<arr.A[i]<<"+"<<arr.A[j]<<" = "<<k<<endl;
            }
        }
    }
    cout<<endl;
}

//for sorted array
void sortedSumK(struct Array arr, int k){
    int i=0, j=arr.length-1;
    while(i<j){
        if(arr.A[i]+arr.A[j]==k){
            cout<<arr.A[i]<<"+"<<arr.A[j]<<" = "<<k<<endl;
            i++;
            j--;
        }
        else if(arr.A[i]+arr.A[j]<k){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<endl;
}

int main(){
    Array arr{{13,4,5,6,1,8,2,11,10,9},10,10};
    Array arr1{{1,2,4,5,6,7,8,10,11,12},10,10};
    sumK(arr, 10);
    sortedSumK(arr1, 10);
    return 0;
}