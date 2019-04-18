#include <iostream>
using namespace std;

class a{
public:
    void sum(){
        int a, b;
        a = 10;
        b = 10;
        cout << a+b;
    }
    void sum(int a, int b){
        cout << a+b;
        sum('H');
    }
    void sum(double c, int d){
        cout << c+d;
    }
    void sum(double a, double b){
        cout << a+b;
    }
    void sum(char c){
        cout << c;
    }
};
int main(){
    a obj;
    obj.sum();
    cout << endl;
    obj.sum(10, 10);
    cout << endl;
    obj.sum('A');
    cout << endl;
    obj.sum(1.45, 11);
    cout << endl;
    obj.sum(1.34, 10.56);
    cout << endl;
    return 0;


}
