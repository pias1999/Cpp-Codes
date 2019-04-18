#include <iostream>
using namespace std;

class A{
//protected:
public:
    int i,j;
    void input(int p, int q){
        i = p; j = q;
    }
};

class B : public A{
public:
    void sum(){
        //input(10,10);
        cout << i + j;
    }

};

int main(){
    B obj;
    obj.input(10,10);
    obj.sum();

    return 0;
}
