#include <iostream>
using namespace std;

class factor{
private:
    int num, fact = 1;
public:
void factorial(){

    cout << "Enter a Number: ";
    cin >> num;
    }
    friend void output(factor ob);
};

void output(factor ob){
    int i;
    for(i = 1; i <= ob.num; i++){
        ob.fact = ob.fact * i;
        }
    cout << "Factorial of " << ob.num << " is: " << ob.fact;
}

int main(){
    factor obj;
    obj.factorial();
    output(obj);

    return 0;
}
