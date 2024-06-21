#include<iostream>
using namespace std;

struct Array{
    int A[20];
    int size;
    int length;
};

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void insertSort(struct Array *arr, int x){
    int i= arr->length-1;
    if(arr->length==arr->size){
        return;
    }
    while (i>=0 && arr->A[i]>x){
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
}

int isSorted(struct Array arr){
    int i;
    for (i = 0; i < arr.length-1; i++){
        if(arr.A[i]>arr.A[i+1]){
            return 0;
        }
    }
    return 1;
}

//putting negative elements on left side and positive on right
void rearrange(struct Array *arr){
    int i=0,j=arr->length-1;
    while (i<j){
        while (arr->A[i]<0){
            i++;
        }
        while (arr->A[j]>=0){
            j--;
        }
        if(i<j){
            swap(&arr->A[i],&arr->A[j]);
        }
    }
}

void display(struct Array arr) {
    for (int i = 0; i < arr.length; i++) {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

int main(){
    struct Array arr{{1, 2, 3, 4, 5}, 10, 5};
    struct Array b{{1, 2, 3, -4, -5}, 10, 5};
    insertSort(&arr, 0);
    display(arr);
    cout<<"Is array sorted "<<isSorted(arr)<<endl;
    rearrange(&b);
    display(b);
    return 0;
}