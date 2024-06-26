#include<iostream>
using namespace std;

class Diagonal{
    int n;
    int *A;
    public:
        Diagonal(int size){
            n = size;
            A = new int[n];
        }
        ~Diagonal(){
            delete []A;
            cout<<"Distructor is called"<<endl;
        }
        void setNumber(int x, int y , int num){
            if(x==y){
                A[x-1]=num;
            }
        }
        void getNumber(int x, int y){
            if(x==y){
                cout<<A[x-1]<<endl;
            }
            else{
                cout<<"0"<<endl;
            }
        }
        void display(){
            for (int i = 0; i < n; i++){
                for (int j = 0; j <n; j++){
                    if(i==j){
                        cout<<A[i]<<" ";
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
    Diagonal d1(3);
    d1.setNumber(1,1,12);
    d1.setNumber(2,2,11);
    d1.setNumber(3,3,10);
    d1.getNumber(1,2);
    d1.display();
    d1.~Diagonal();
    return 0;
}