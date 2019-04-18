#include <iostream>
using namespace std;

class A{
private:
    void personal(){
        cout << "I am not accessible from any of my children.";
    }
protected:
    void sharable1(){
        cout << "I am sharable1 from class A.";
    }
public:
    A(){
    cout << "I am constructor of class A." << endl;
    }
};

class B : protected A{
public:
    void output(){
        sharable1();
    }
    B(){
        cout << "Hello B" << endl;
    }
};

int main(){
    B obj;
    obj.output();

    return 0;
}
