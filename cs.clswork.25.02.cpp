#include <iostream>
#include <string>
using namespace std;

class full_name{
public:
    //char n[100];
    string n;
    void name(){
        cout << "Enter your name: ";
        //cin.get(n, 100);
        getline(cin, n);
    }
        void show_name(){
        cout << "Your name is: " << n;
    }
};

int main(){
    full_name obj;
    obj.name();
    obj.show_name();
    return 0;
}
