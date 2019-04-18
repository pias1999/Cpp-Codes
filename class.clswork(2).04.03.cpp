#include <iostream>
using namespace std;

class A{
public:
    int p,q;
    A(){
        p = 100, q = 500;
    }
    void Myth(){
        cout << "P + Q: " << p + q << endl;
    }
    void Truth(){
        cout << "P: " << p << endl << "Q: " << q << endl;
    }
};

class B{
public:
    int r;
    B(){
        r = 200;
    }
    void Myth(){
        cout << "Square of R is: " << r * r << endl;
    }
    void Truth(){
        cout << "R: " << r << endl;
    }
};

int main(){
    A ob1;
    B ob2;
    ob1.Truth();
    ob1.Myth();
    cout << "From Class B: " << endl;
    ob2.Truth();
    ob2.Myth();

    return 0;
}
