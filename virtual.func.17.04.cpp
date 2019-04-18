#include <iostream>
using namespace std;

class A{
public:
    virtual void show(){
        cout << "I am A" << endl;
    }
};

class B : public A{
public:
    void show(){
        cout << "I am B";
    }
};
int main(){
    A *a;
    A ob;
    B ob1;
    ob.show();
    a = &ob1;
    a -> show();

    return 0;
}
