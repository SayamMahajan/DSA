#include<iostream>
using namespace std;

// using bitwise operator

int main(){
    char A[] ="finding";
    int H;
    for (int i = 0; A[i] != '\0'; i++){
        int x =1;
        x = x<<(A[i]-97);

        if((x&H)>0){
            cout<<A[i]<<" is duplicate"<<endl;
        }
        else{
            H = x | H;
        }
    }
    
    return 0;
}