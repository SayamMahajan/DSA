#include<iostream>
using namespace std;

int validateString(char s[]){
    for(int i = 0; s[i]!='\0' ; i++){
        if(!(s[i]>=65 && s[i]<=90) && !(s[i]>=97 && s[i]<=122) && (s[i]>=48 && s[i]<=57)){
            return 0;
        }
    }
    return 1;
}
int main(){
    char s[]={'s','a','y','a','m','1','3','?','\0'};
    if(validateString(s)){
        cout<<"Valid string"<<endl;
    }
    else{
        cout<<"Invalid String"<<endl;
    }
    return 0;
}