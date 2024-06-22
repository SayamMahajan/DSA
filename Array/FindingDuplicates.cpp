#include<iostream>
using namespace std;

struct Array{
    int A[20];
    int size;
    int length;
};

void findingDuplicates(struct Array arr){
    int duplicate=0;
    for (int i = 0; i < arr.length-1; i++){
        if(arr.A[i]==arr.A[i+1]&& duplicate!=arr.A[i]){
            duplicate=arr.A[i];
            cout<<arr.A[i]<<" ";
        }
    }
    cout<<endl;
}

void noOfTimes(struct Array arr){
    for (int i = 0; i < arr.length-1; i++){
        if(arr.A[i]==arr.A[i+1]){
            int j=i+1;
            while(arr.A[i]==arr.A[j]){
                j++;
            }
            cout<<arr.A[i]<<" was repeated "<<j-i<<" times "<<endl;
            i=j-1;
        }
    }
    cout<<endl;
}

//using hash approach
void hashFindingDuplicates(struct Array arr){
    Array *arr1;
    arr1=new Array[11]{0};
    arr1->length=11;
    arr1->size=11;
    for (int i = 0; i <arr.length; i++){
        arr1->A[arr.A[i]]++;
    }
    for(int i=arr.A[0]; i<arr1->length;i++){
        if(arr1->A[i]>1){
            cout<<i<<" was repeated "<<arr1->A[i]<<" times "<<endl;
        }
    }
    cout<<endl;
}

//for unsorted array

void duplicatesUnsorted(struct Array arr){
    for(int i=0; i<arr.length-1; i++){
        int count=1;
        if(arr.A[i]!=-1){
            for(int j = i+1; j<arr.length; j++){
                if(arr.A[i]==arr.A[j]){
                    count++;
                    arr.A[j]=-1;
                }
            }
            if(count>1){
                cout<<arr.A[i]<<" was repeated "<<count<<" times "<<endl;
            }
        }
    }
    cout<<endl;
}
int main(){
    Array arr{{3,3,3,6,7,7,9,10},10,8};
    Array arr1{{3,5,3,7,4,7,9,1},10,8};
    findingDuplicates(arr);
    hashFindingDuplicates(arr);
    noOfTimes(arr);
    duplicatesUnsorted(arr1);
    return 0;
}