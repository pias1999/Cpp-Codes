#include <iostream>
using namespace std;

class base{
public:
    virtual void speech() = 0;
};

class cat : public base{
public:
    void speech(){
        cout << "Meaw." << endl;
    }
};

class dog : public base{
public:
    void speech(){
        cout << "Bark.";
    }
};

int main(){
    base *obj;
    cat obj1;
    dog obj2;
    obj = &obj1;
    obj -> speech();
    obj = &obj2;
    obj -> speech();
}
