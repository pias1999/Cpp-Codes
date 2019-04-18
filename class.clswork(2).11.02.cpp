#include <iostream>
using namespace std;

class student{ //class name
public:
    string name;
    void input(){
        cout << "What is your name: " ;
        cin >> name; //Giving input of name.
        cout << "My name is: " << "\"" << name << "\""<< endl << "My name is: " << "\'" << name << "\'";//executing
    }
};
    int main(){
        student obj;
        obj.input();

        return 0;
    }
