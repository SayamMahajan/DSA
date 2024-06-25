#include<iostream>
using namespace std;

int main(){
    char A[]="arnim";
    char B[]="nirma";
    int H[26]={0};

    for(int i = 0; A[i]!='\0'; i++){
        H[A[i]-97]++;
    }

    for(int i = 0; B[i]!='\0'; i++){
        H[B[i]-97]--;
        if(H[B[i]-97]<0){
            cout<<"Strings are not Anagram"<<endl;
            break;
        }
        if(B[i+1]=='\0'){
            cout<<"Strings are Anagram"<<endl;
        }
    }
    return 0;
}