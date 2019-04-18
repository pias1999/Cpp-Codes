#include <iostream>
using namespace std;

class value{
public:
    int num;
    void Absolute(){
        cout << "Enter a value: ";
        cin >> num;
        if(num < 0){
            num = (-1) * num;
        }
       cout << "Absolute value of the number is: " << num << endl;
    }
    void Absolute(float num){
        cout << "Enter a number: ";
        cin >> num;
        if(num < 0){
        num = (-1) * num;
        }
       cout << "Absolute value of the float number is: " << num;
    }
};

    int main(){
        value obj1, obj2;
        obj1.Absolute();
        obj2.Absolute(-12.55);

    }
