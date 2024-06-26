#include<iostream>
using namespace std;

class LowerTriangle{
    int n;
    int *A;
    public:
        LowerTriangle(int size){
            n = size;
            A = new int[n*(n+1)/2];
        }
        ~LowerTriangle(){
            delete []A;
            cout<<"Distructor is called"<<endl;
        }
        void setNumber(int i, int j , int num){
            if(i>=j){
                A[i*(i-1)/2 + j-1]=num;  //for column major formula (n-1)*j+ (j-2)(j-1)/2 + i-j
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

    LowerTriangle d1(size);

    cout<<"Enter the numbers: "<<endl;
    for(int i=1; i<=size; i++){
        for(int j=1; j<=size; j++){
            cin>>x;
            d1.setNumber(i,j,x);
        }
    }

    d1.display();
    d1.~LowerTriangle();
    return 0;
}