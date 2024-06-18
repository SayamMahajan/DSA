#include<iostream>
using namespace std;

int main(){
    //first type - all in static memory
    int arr[2][3]={{1,2,3},{4,5,6}};

    //second type - first array of pointers in static, others in heap
    int *A[3];
    A[0]= new int [4];
    A[1]= new int [4];
    A[2]= new int [4];

    //third type - entire array is in heap
    int **B;
    B = new int*[3];
    B[0]= new int [4];
    B[1]= new int [4];
    B[2]= new int [4];
    return 0;
}