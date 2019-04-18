#include <iostream>
#include <string>
using namespace std;

class full_name{
public:
    int id;
    string n, cour;
    full_name(){
        cout << "Enter your name: ";
        getline(cin, n);
        cout << "Your name is: " << n << endl;
    }
    full_name(int p, string c){
        id = p;
        cour = c;
        cout << "Your ID is: " << id << endl;
        cout << "Your course ID is: " << cour << endl;
    }
};

int main(){
    full_name obj1, obj2(172014012, "CSE 201");
    full_name obj3 = obj2;
    cout << "Your ID is: " << obj3.id;
    //cout << "Your name is: " << obj.n;
    return 0;
}
