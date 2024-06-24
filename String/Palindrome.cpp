#include<iostream>
using namespace std;

int main(){
    //first approach
    char s[]={'l','e','v','e','t','\0'};
    int i,j;
    char a[7];
    for (j = 0; s[j]!='\0'; j++){
    }
    j-=1;
    for(i=0; i<j; i++,j--){
        a[i]=s[j];
    }
     //now comparing
    for (i = 0; s[i]!='\0' && a[i]!='\0'; i++){
        if(a[i]!=s[i]){
            cout<<"String is not palindrome"<<endl;
            break;
        }
    }

    //second approach
    for (j = 0; s[j]!='\0'; j++){
    }
    j-=1;
    for(i=0; i<j; i++,j--){
        if(s[i]!=s[j]){
            cout<<"String is not palindrome"<<endl;
            break;
        }
    }
    return 0;
}