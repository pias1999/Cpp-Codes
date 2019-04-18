#include <iostream>
using namespace std;

class factor{
public:
    int i;
    int num, fact = 1;
void factorial(){

    cout << "Enter a Number: ";
    cin >> num;

    for(i = 1; i <= num; i++){
        fact = fact * i;
        }
    cout << "Factorial of " << num << " is: " << fact;

}
};
int main(){
    factor obj;
    obj.factorial();

    return 0;
}
