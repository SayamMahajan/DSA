#include<iostream>
using namespace std;

struct Array{
    int A[20];
    int size;
    int length;
};

void Append(struct Array *arr, int x){
    if(arr->length< arr->size){
        arr->A[arr->length++]=x;
    }
}

void Insert(struct Array *arr, int index, int x){
    int i;
    if(index>=0 && index < arr->length){
        for(i=arr->length; i>index; i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}

int Delete(struct Array *arr, int index){
    int x=0;

    if(index>=0 && index < arr->length){
        x=arr->A[index];
        for (int i=index; i<arr->length; i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int LinearSearch(struct Array *arr,int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i],&arr->A[0]);  //move to head method, other method is called transposition
            return i;                     // where element is moved one step forward
        }
    }
    return -1;
}

int main(){
    struct Array arr{{1,2,3,4,5},10,5};
    
    cout<<LinearSearch(&arr, 2)<<endl;

    for (int i = 0; i < arr.length; i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
    return 0;
}