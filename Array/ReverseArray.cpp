#include<iostream>
using namespace std;

struct Array{
    int A[20];
    int size;
    int length;
};

//using extra array
void reverse(struct Array *arr){
    int *B;
    int i, j;

    B = new int[arr->length];
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++){
        B[j] = arr->A[i];
    }
    for (i = 0; i < arr->length; i++){
        arr->A[i] = B[i];
    }

    delete[] B;
}

//using swap approach
void swapReverse(struct Array *arr){
    int i,j,temp;
    for (i = 0, j=arr->length-1; i<j; i++, j--){
       temp=arr->A[i];
       arr->A[i]=arr->A[j];
       arr->A[j]=temp;
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
    
    cout << "Original array: ";
    display(arr);
    
    swapReverse(&arr);
    
    cout << "Reversed array: ";
    display(arr);

    return 0;
}
