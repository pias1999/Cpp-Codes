#include <iostream>
using namespace std;

int num1, num2;
class cons{
public:
    int add;
    cons(){
        add = num1 + num2;
        cout << "Addition of " << num1 << " and " << num2 << " is: " << add;
    }
};

int main(){
    cout << "Input 1st Integer: ";
    cin >> num1;
    cout << "Input 2nd Integer: ";
    cin >> num2;
    cons obj;

    return 0;
}
