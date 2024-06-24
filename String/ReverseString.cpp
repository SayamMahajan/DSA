#include<iostream>
using namespace std;

int main(){
    char s[]={'c','o','u','n','t','\0'};
    int i,j;
    for (j = 0; s[j]!='\0'; j++){
    }
    j-=1;
    for(i=0; i<j; i++,j--){
        char t = s[i];
        s[i]=s[j];
        s[j]=t;
    }
    cout<<s;
    return 0;
}