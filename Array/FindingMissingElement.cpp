#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void findElement(struct Array arr){
    int dif;
    dif=arr.A[0]-0;
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]-i!=dif){
            while(arr.A[i]-i>dif){
                cout<<(i+dif)<<" ";
                dif++;
            }
        }
    }
    cout<<endl;
}

//using hash approach
void hashFind(struct Array arr){
    Array *arr1;
    arr1=new Array[11];
    arr1->length=11;
    arr1->size=11;
    for (int i = 0; i <arr.length; i++){
        arr1->A[arr.A[i]]=1;
    }
    for(int i=arr.A[0]; i<arr1->length;i++){
        if(arr1->A[i]!=1){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main(){
    Array arr{{3,4,6,9,10},10,5};
    findElement(arr);
    hashFind(arr);
    return 0;
}