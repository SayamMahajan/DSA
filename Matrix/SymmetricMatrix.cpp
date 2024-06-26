#include<iostream>
using namespace std;

class SymmetricMatrix{
    int n;
    int *A;
    public:
        SymmetricMatrix(int size){
            n = size;
            A = new int[n*(n+1)/2];
        }
        ~SymmetricMatrix(){
            delete []A;
            cout<<"Distructor is called"<<endl;
        }
        void setNumber(int i, int j , int num){
            if(i>=j){
                A[i*(i-1)/2 + j-1]=num; 
            }
        }
        void getNumber(int i, int j){
            if(i>=j){
                cout<<A[i*(i-1)/2 + j-1]<<endl;
            }
            else{
                cout<<"0"<<endl;
            }
        }
        void display(){
            for (int i = 1; i <=n; i++){
                for (int j =1; j <=n; j++){
                    if(i>=j){
                        cout<<A[i*(i-1)/2 + j-1]<<" ";
                    }
                    else{
                        cout<<A[j*(j-1)/2 + i-1]<<" ";
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

    SymmetricMatrix d1(size);

    cout<<"Enter the numbers: "<<endl;
    for(int i=1; i<=size; i++){
        for(int j=1; j<=size; j++){
            cin>>x;
            d1.setNumber(i,j,x);
        }
    }

    d1.display();
    d1.~SymmetricMatrix();
    return 0;
}