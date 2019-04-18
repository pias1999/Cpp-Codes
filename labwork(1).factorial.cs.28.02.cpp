#include <iostream>
using namespace std;

int main(){
    int i;
    int num, fact = 1;

    cout << "Enter a Number: ";
    cin >> num;

    for(i = 1; i <= num; i++){
        fact = fact * i;
        }
    cout << "Factorial of " << num << " is: " << fact;

    return 0;
}
