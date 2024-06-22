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
}


int main(){
    Array arr{{3,4,6,9,10},10,5};
    findElement(arr);
    return 0;
}