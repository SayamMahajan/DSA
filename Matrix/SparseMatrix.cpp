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
    Sparse add(Sparse& s) {
        if (m != s.m || n != s.n) {
            cout << "Addition can't be performed" << endl;
            return Sparse(0, 0, 0);
        }

        Sparse sum(m, n, num + s.num);

        int i, j, k;
        i = j = k = 0;

        while (i < num && j < s.num) {
            if (ele[i].i < s.ele[j].i) {
                sum.ele[k++] = ele[i++];
            }
            else if (ele[i].i > s.ele[j].i) {
                sum.ele[k++] = s.ele[j++];
            }
            else {
                if (ele[i].j < s.ele[j].j) {
                    sum.ele[k++] = ele[i++];
                }
                else if (ele[i].j > s.ele[j].j) {
                    sum.ele[k++] = s.ele[j++];
                }
                else {
                    sum.ele[k] = ele[i];
                    sum.ele[k++].x = ele[i++].x + s.ele[j++].x;
                }
            }
        }

        for (; i < num; i++) {sum.ele[k++] = ele[i];}
        for (; j < s.num; j++) {sum.ele[k++] = s.ele[j];}
        sum.num = k;

        return sum;
    }
};

int main(){
    Sparse s1(5,5,5);
    Sparse s2(5,5,7);
    s1.read();
    s1.display();
    s2.read();
    s2.display();
    Sparse sum=s1.add(s2);
    sum.display();

    return 0;
}