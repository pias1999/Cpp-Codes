#include <iostream>
using namespace std;

void swapping(){
    int num1, num2, temp;

    cout << "Enter 1st Value: ";
    cin >> num1;
    cout << "Enter 2nd Value: ";
    cin >> num2;
    cout << endl << "Before swapping." << endl;
    cout << endl << "1st Value : " << num1 << endl << "2nd Value : " << num2 << endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << endl << "After swapping." << endl;
    cout << endl << "1st Value : " << num1 << endl << "2nd Value : " << num2 << endl;
}

int main(){
    swapping();

    return 0;
}
