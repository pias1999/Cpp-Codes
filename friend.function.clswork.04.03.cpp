#include <iostream>
using namespace std;

class B;
class A{
private:
    int p, q;
public:
    A(){
        p = 100, q = 100;
    }
    void Myth(){
        cout << "This is a friend function: " << endl;
    }
    void Truth(){
        cout << "P : " << p << endl << "Q : " << q << endl;
        cout << "P + Q : " << p + q << endl;
    }
    friend void outsider(A ob1, B ob2, int t);
};
class B{
public:
    int r;
    B(){
        r = 20;
    }
    void Myth(){
        cout << "Square of R is : " << r*r << endl;
    }
    void Truth(){
        cout << "R : " << r << endl << endl;
    }
    friend void outsider(A ob1, B ob2, int t);
};

void outsider(A ob1, B ob2, int t){
    int s,m,n;
    cout << "Input value of M & N : " << endl;
    cout << "Enter \"M\" : ";
    cin >> m;
    cout << "Enter \"N\" : ";
    cin >> n;
    s = ob1.p + ob1.q + ob2.r + m + n + t;
    cout<< "OB1.P : " << ob1.p << endl << "OB1.Q : " << ob1.q << endl << "OB2.R : " << ob2.r << endl
     << "M : " << m << endl << "N : " << n << endl << "T : " << t << endl;
    cout << "Total after accessing friend class: " << s;
}

int main(){
    A obj1;
    B obj2;
    obj1.Myth();
    obj1.Truth();
    obj2.Myth();
    obj2.Truth();
    cout << "From independent function: " << endl;
    outsider(obj1, obj2, 80);
}
