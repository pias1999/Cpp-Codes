#include <iostream>
using namespace std;

class information{
public:
    string name;
    char a[50];
    information(){
        cout << "Using getline function: ";
        cin.ignore(0);
        getline(cin,name);
        cout << "Output of getline function: " << name << endl;

        cout << endl << "Using get function: ";
        cin.get(a,50);
        cout << "Output of get function: " << a;
    }
};

int main(){
    information obj1;

    return 0;
}

