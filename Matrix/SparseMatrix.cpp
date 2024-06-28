#include<iostream>
using namespace std;

class Element{
    public:
        int i;
        int j;
        int x;
};

class Sparse{
    private:
        int m;
        int n;
        int num;
        Element *ele;
    
    public:
        Sparse(int a, int b, int c){
            m=a;
            n=b;
            num=c;
            ele= new Element[num];
        }
        ~Sparse(){
            delete []ele;
        }
        void read(){
            cout<<"Enter the elements"<<endl;
            for (int i = 0; i < num; i++){
                cin>>ele[i].i>>ele[i].j>>ele[i].x;
            }
        }
        void display(){
            int k=0;
            for(int i=1; i<=m; i++){
                for(int j=1; j<=n; j++){
                    if(ele[k].i==i && ele[k].j==j){
                        cout<<ele[k++].x<<" ";
                    }
                    else{
                        cout<<"0"<<" ";
                    }
                }
                cout<<endl;
            }
        }
};

int main(){
    Sparse s1(5,5,5);
    s1.read();
    s1.display();
    return 0;
}