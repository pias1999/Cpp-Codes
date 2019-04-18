#include <iostream>
using namespace std;

char op;
class operators{
public:
double num1, num2;
void showChoice(){
    cout << "Enter \"+\" to find SUM of two numbers." << endl;
    cout << "Enter \"-\" to find SUBTRACTION of two numbers." << endl;
    cout << "Enter \"*\" to find MULTIPLICATION of two numbers." << endl;
    cout << "Enter \"/\" to find DIVISION of two numbers." << endl << endl;
    cout << "Enter an operator: ";
    cin >> op;
}

void add(){
    cout << "\nEnter first value: ";
    cin >> num1;
    cout << "Enter second value: ";
    cin >> num2;
    double sum = num1 + num2;
    cout << "\nSUM of " << num1 << " and " << num2 << " is: " << sum;
}

void subtract(){
    cout << "\nEnter first value: ";
    cin >> num1;
    cout << "Enter second value: ";
    cin >> num2;
    double minus = num1 - num2;
    cout << "\nSUBTRACTION of " << num1 << " and " << num2 << " is: " << minus;
}

void multiply(){
    cout << "\nEnter first value: ";
    cin >> num1;
    cout << "Enter second value: ";
    cin >> num2;
    double mult = num1 * num2;
    cout << "\nMULTIPLICATION of " << num1 << " and " << num2 << " is: " << mult;

}

void divide(){
    cout << "\nEnter first value: ";
    cin >> num1;
    cout << "Enter second value: ";
    cin >> num2;
    double div = num1 / num2;
    cout << "\nDIVISION of " << num1 << " and " << num2 << " is: " << div;
}
};
int main(){
    operators obj1, obj2, obj3, obj4, obj5;
    obj1.showChoice();
    if(op == '+'){
        obj2.add();
    }else if(op == '-'){
        obj3.subtract();
    }else if(op == '*'){
        obj4.multiply();
    }else if (op == '/'){
        obj5.divide();
    }else{
        cout << "INVALID.";
    }

    return 0;

}
