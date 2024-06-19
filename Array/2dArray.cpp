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

//row major mapping -- Addr(A[i][j]) = Lo + [i*n + j]*w

/* type A[d1][d2][d3][d4];
Addr(A[d1][d2][d3][d4])=Lo + [i1*d2*d3*d4 + i2*d3*d4 + i3*d4 + i4]*w 
This can be simplified using horner's rule*/