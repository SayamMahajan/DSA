#include<iostream>
using namespace std;

struct Array{
    int A[20];
    int size;
    int length;
};

//iterative approach
int BinarySearch(struct Array arr, int key){
    int l,mid,h;
    l=0;
    h=arr.length -1;

    while (l<=h){
        mid = (l+h)/2;
        if (key==arr.A[mid]){
            return mid;
        } else if (key<arr.A[mid]){
            h=mid-1;
        } else{
            l = mid+1;
        }
    }
    return -1;
}

//recursive approach
int BinarySearchR(int a[], int l, int h, int key){
    int mid;
    if (l<=h){
        mid=(l+h)/2;
        if (key==a[mid]){
            return mid;
        } else if(key<a[mid]){
            return BinarySearchR(a,l,mid-1,key);
        } else{
            return BinarySearchR(a,mid+1,h,key);
        }
    }
    return -1;
}


int main(){
    struct Array arr{{1,2,3,4,5},10,5};
    
    cout<<BinarySearchR(arr.A,0,arr.length,4)<<endl;
    return 0;
}

//O(logn) is the time complexity of the binary search method