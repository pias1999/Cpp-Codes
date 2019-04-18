#include <iostream>
using namespace std;

class even_odd{
private:
    int num;
    void input();
public:
    friend void checker(even_odd ob);
};
//Scope Operator
void even_odd :: input(){
    cout << "Enter a value: ";
    cin >> num;
    }

void checker(even_odd ob){
        ob.input();
        if ( ob.num % 2 == 0){
        cout << ob.num << " is an EVEN number." << endl << endl;
    }else{
        cout << ob.num << " is an ODD number." << endl << endl;
    }
}

int main(){
    even_odd obj;
    checker(obj);

    return 0;
}
