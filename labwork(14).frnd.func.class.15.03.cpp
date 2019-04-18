#include <iostream>
using namespace std;

class sum2;
class sum1{
private:
    int num;
public:
    void val(){
    cout << "Enter 1st Value: ";
    cin >> num;
    }
    friend void sum(sum1 ob1, sum2 ob2);
};
class sum2{
private:
    int num;
public:
    void val(){
    cout << "Enter 2nd Value: ";
    cin >> num;
    }
    friend void sum(sum1 ob1, sum2 ob2);
};
void sum(sum1 ob1, sum2 ob2){
    int add, subtr, mult, div;
    add = ob1.num + ob2.num;
    subtr = ob1.num - ob2.num;
    mult = ob1.num * ob2.num;
    div = ob1.num / ob2.num;
    cout << "Addition of " << ob1.num << " and " << ob2.num << " is: " << add << endl;
    cout << "Subtraction of " << ob1.num << " and " << ob2.num << " is: " << subtr << endl;
    cout << "Multiplication of " << ob1.num << " and " << ob2.num << " is: " << mult << endl;
    cout << "Division of " << ob1.num << " and " << ob2.num << " is: " << div << endl;
}
int main(){
    sum1 obj1;
    sum2 obj2;
    obj1.val();
    obj2.val();
    sum(obj1, obj2);

    return 0;
}
