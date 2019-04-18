#include <iostream>
using namespace std;

class A{
protected:
    void sum(int p, int q){
    int add = p + q;
    cout << "SUM of " << p << " and " << q << " is: " << add;
    }
};

class B : public A{
public:
    int a = 5, b = 5;
    void input(){
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    sum(a,b);
    }
};

int main(){
    B obj;
    obj.input();

    return 0;
}
