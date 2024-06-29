#include <iostream>
using namespace std;

class Term {
public:
    int coef;
    int exp;
};

class Polynomial {
private:
    int n;
    Term *terms;
public:
    Polynomial(int a) {
        n = a;
        terms = new Term[n];
    }

    ~Polynomial() {
        delete[] terms;
    }

    void read() {
        cout << "Enter the terms (coefficient and exponent):" << endl;
        for (int i = 0; i < n; i++) {
            cin >> terms[i].coef >> terms[i].exp;
        }
    }

    void display() {
        for (int i = 0; i < n; i++) {
            if (terms[i].coef != 0) { // To handle zero coefficients
                cout << terms[i].coef << "x^" << terms[i].exp;
                if (i < n - 1 && terms[i + 1].coef != 0) {
                    cout << " + ";
                }
            }
        }
        cout << endl;
    }

    Polynomial add(Polynomial &p) {
        Polynomial sum(n + p.n);
        int i = 0, j = 0, k = 0;

        while(i<n && j<p.n){
            if(terms[i].exp>p.terms[j].exp){
                sum.terms[k++]=terms[i++];
            }
            else if(terms[i].exp < p.terms[j].exp){
                sum.terms[k++]=p.terms[j++];
            }
            else{
                sum.terms[k].exp=terms[i].exp;
                sum.terms[k++].coef=terms[i++].coef+p.terms[j++].coef;
            }
        }
        for(;i<n;i++)sum.terms[k++]=terms[i];
        for(;j<p.n;j++)sum.terms[k++]=p.terms[j];
 
        sum.n=k;
        return sum;
    }
};


int main() {
    int numTerms1, numTerms2;
    cout << "Enter the number of terms for the first polynomial: ";
    cin >> numTerms1;
    Polynomial p1(numTerms1);
    p1.read();
    p1.display();

    cout << "Enter the number of terms for the second polynomial: ";
    cin >> numTerms2;
    Polynomial p2(numTerms2);
    p2.read();
    p2.display();

    Polynomial sum = p1.add(p2);
    cout << "Sum of the polynomials: ";
    sum.display();

    return 0;
}
