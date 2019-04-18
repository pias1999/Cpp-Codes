#include <iostream>
using namespace std;

class sum2;
class sum1{
private:
    int a, b;
public:
    sum1(){
        a = 60, b = 40;
    }
    void add(){
        cout << "A : " << a << endl << "B : " << b << endl;
        cout << "A + B : " << a + b << endl;
    }
    friend void subtr(sum1 ob1, sum2 ob2, int d);
};
class sum2{
public:
    int c;
    sum2(){
        c = 50;
    }
    void add(){
    cout << "C : " << c << endl;
    }
    friend void subtr(sum1 ob1, sum2 ob2, int d);
};
void subtr(sum1 ob1, sum2 ob2, int d){
    int i, p, q, sum;
    cout << "Input values of P & Q : " << endl;
    cout << "Input P : ";
    cin >> p;
    cout << "Input Q : ";
    cin >> q;
    i = p + q;
    cout << "P + Q : " << i << endl;
    sum = ob1.a + ob1.b + ob2.c + d - i;
    cout << "P : " << p << endl << "Q : " << q << endl << "D : " << d << endl;
    cout << "Total after subtracting P and Q is : " << sum;
}
int main(){
    sum1 obj1;
    sum2 obj2;
    obj1.add();
    obj2.add();
    cout << "From friend function: " << endl;
    subtr(obj1, obj2, 30);

    return 0;
}
