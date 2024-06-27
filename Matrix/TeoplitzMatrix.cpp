#include<iostream>
using namespace std;

class TeoplitzMatrix{
    int n;
    int *A;
    public:
        TeoplitzMatrix(int size){
            n = size;
            A = new int[2*n-1];
        }
        ~TeoplitzMatrix(){
            delete []A;
            cout<<"Distructor is called"<<endl;
        }
        void setNumber(int i, int j , int num){
            if(i<=j){
                A[j-i]=num;
            }
            else{
                A[n+i-j-1]=num;
            }
        }
        void getNumber(int i, int j){
            if(i<=j){
                cout<<A[j-i]<<endl; 
            }
            else{
                cout<<A[n+i-j-1]<<endl;
            }
        }
        void display(){
            for (int i = 1; i <=n; i++){
                for (int j =1; j <=n; j++){
                    if(i<=j){
                        cout<<A[j-i]<<" "; 
                    }
                    else{
                        cout<<A[n+i-j-1]<<" ";
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

    TeoplitzMatrix d1(size);

    cout<<"Enter the numbers: "<<endl;
    for(int i=1; i<=size; i++){
        for(int j=1; j<=size; j++){
            cin>>x;
            d1.setNumber(i,j,x);
        }
    }

    d1.display();
    d1.~TeoplitzMatrix();
    return 0;
}