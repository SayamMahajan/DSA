#include<iostream>
using namespace std;

int main(){
    char s[]={'s','A','Y','a','M','\0'};
    int i;
    for (i = 0; s[i]!='\0' ; i++){
        if (s[i]>=65 && s[i]<=90){
            s[i]+=32;
            cout<<s[i];
        }
        else if (s[i]>=97 && s[i]<='z'){
            s[i]-=32;
            cout<<s[i];
        }
    }
    cout<<endl;
    return 0;
}