#include <iostream>
using namespace std;

void max_two(){
    int num1, num2;

    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    if(num1 > num2){
        cout << "The maximum number is: " << num1;
    }else{
        cout << "The maximum number is: " << num2;
    }
}
int main(){
   max_two();

   return 0;
}
