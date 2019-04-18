#include <iostream>
using namespace std;

class A{
private:
    int p, q;
public:
    friend class B;
    /*void input(){
        cout << "Enter P: ";
        cin >> p;
        cout << "Enter Q: ";
        cin >> q;*/
};

class B{
public:
    int m;
    void input(A &ob){
        cout << "Enter P: ";
        cin >> ob.p;
        cout << "Enter Q: ";
        cin >> ob.q;
        cout << "Enter M: ";
        cin >> m;
    }
    void sum(A &ob){
        int s;
        s = ob.p + ob.q + m;
        cout << "Addition of " << ob.p << ", " << ob.q << " and " << m << " is: " << s;
    }
};

int main(){
    A obj1;
    B obj2;
    //obj1.input();
    obj2.input(obj1);
    obj2.sum(obj1);

    return 0;
}
