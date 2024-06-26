#include<iostream>
using namespace std;

class UpperTriangle{
    int n;
    int *A;
    public:
        UpperTriangle(int size){
            n = size;
            A = new int[n*(n+1)/2];
        }
        ~UpperTriangle(){
            delete []A;
            cout<<"Distructor is called"<<endl;
        }
        void setNumber(int i, int j , int num){
            if(i<=j){
                A[(i-1)*n+ (i-1)*(i-2)/2 + j-i]=num;  //for column major formula j*(j-1)/2 + i-1
            }
        }
        void getNumber(int i, int j){
            if(i<=j){
                cout<<A[(i-1)*n+ (i-1)*(i-2)/2 + j-i]<<endl; 
            }
            else{
                cout<<"0"<<endl;
            }
        }
        void display(){
            for (int i = 1; i <=n; i++){
                for (int j =1; j <=n; j++){
                    if(i<=j){
                        cout<<A[(i-1)*n+ (i-1)*(i-2)/2 + j-i]<<" ";
                    }
                    else{
                        cout<<"0"<<" ";
                    }
                }
                cout<<endl;
            }
            cout<<endl;
        }
};

int main(){
    int size, x;
    cout<<"Enter the size: ";
    cin>>size;

    UpperTriangle d1(size);

    cout<<"Enter the numbers: "<<endl;
    for(int i=1; i<=size; i++){
        for(int j=1; j<=size; j++){
            cin>>x;
            d1.setNumber(i,j,x);
        }
    }

    d1.display();
    d1.~UpperTriangle();
    return 0;
}