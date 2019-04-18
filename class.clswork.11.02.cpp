#include <iostream>

using namespace std;
class student{
public:
    string stdt_name;
    int age;
    void input(){
        cout << "Please enter your Name: ";
        cin >> stdt_name;
        cout << "Please enter your Age: ";
        cin >> age;
        cout << "* * * * * * * * * * * * * * * * * * *\n";
        cout << "Your name is: " << stdt_name << "\n" << "Your age is: " << age;
    }
};
    int main(){
        student obj1;
        obj1.input();

        return 0;
    }
