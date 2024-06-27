#include<iostream>
using namespace std;

class TriDigonalMatrix{
    int n;
    int *A;
    public:
        TriDigonalMatrix(int size){
            n = size;
            A = new int[3*n-2];
        }
        ~TriDigonalMatrix(){
            delete []A;
            cout<<"Distructor is called"<<endl;
        }
        void setNumber(int i, int j , int num){
            if(i-j==1){
                A[i-2]=num;
            }
            else if(i-j==0){
                A[n-1+i-1]=num;
            }
            else if(j-i==1){
                A[2*n-1+i-1]=num;
            }
        }
        void getNumber(int i, int j){
            if(i-j==1){
                cout<<A[i-2]<<endl; 
            }
            else if(i-j==0){
                cout<<A[n-1+i-1]<<endl; 
            }
            else if(j-i==1){
                cout<<A[2*n-1+i-1]<<endl; 
            }
            else{
                cout<<"0"<<endl;
            }
        }
        void display(){
            for (int i = 1; i <=n; i++){
                for (int j =1; j <=n; j++){
                    if(i-j==1){
                        cout<<A[i-2]<<" "; 
                    }
                    else if(i-j==0){
                        cout<<A[n-1+i-1]<<" "; 
                    }
                    else if(j-i==1){
                        cout<<A[2*n-1+i-1]<<" "; 
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

    TriDigonalMatrix d1(size);

    cout<<"Enter the numbers: "<<endl;
    for(int i=1; i<=size; i++){
        for(int j=1; j<=size; j++){
            cin>>x;
            d1.setNumber(i,j,x);
        }
    }

    d1.display();
    d1.~TriDigonalMatrix();
    return 0;
}