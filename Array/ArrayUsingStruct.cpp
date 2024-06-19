#include<iostream>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};

int main(){
    struct Array arr;
    cout<<"Enter the size of the array: ";
    cin>>arr.size;
    arr.A = new int{arr.size};
    cout<<"Enter the number of the numbers: ";
    cin>>arr.length;

    for (int i = 0; i < arr.length; i++){
        cin>>arr.A[i];
    }
    for (int i = 0; i < arr.size; i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}