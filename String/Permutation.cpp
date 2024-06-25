#include<iostream>
using namespace std;

void perm(char S[], int k){
    static int A[10]={0};
    static char R[10]={0};
    if(S[k]=='\0'){
        R[k]='\0';
        cout<<R<<" ";
    }
    else{
        for (int i = 0; S[i]!='\0'; i++){
            if (A[i]==0){
                R[k]=S[i];
                A[i]=1;
                perm(S, k+1);
                A[i]=0;
            }  
        }
        
    }
}

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

//using swap
void permSwap(char S[], int l , int h){
    if(l==h){
        cout<<S<<" ";
    }
    else{
        for(int i = l; i<=h; i++){
            swap(S[l], S[i]);
            permSwap(S, l+1, h);
            swap(S[l],S[i]);
        }
    }
}


int main(){
    char S[]="ABC";
    permSwap(S,0,2);
    return 0;
}