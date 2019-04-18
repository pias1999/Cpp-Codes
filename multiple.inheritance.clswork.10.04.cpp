#include <iostream>
using namespace std;

class A{
protected:
    int p;
public:
    A(){
        cout << "I am from A." << endl;
    }
    void show(){
        cout << "This is Parent class A." << endl;
    }
};
class B{
protected:
    int q;
public:
    B(){
        cout << "I am from B." << endl;
    }
    void show(){
        cout << "This is Parent class B." << endl;
    }
};
class C : public A, public B{
public:
    void show(){
        B :: show();
        cout << "Enter P: ";
        cin >> p;
        cout << "Enter Q: ";
        cin >> q;
        cout << "P + Q: " << p + q;
    }
};

int main(){
    C obj;
    obj.A :: show();
    //obj.B :: show();
    obj.show();

}
