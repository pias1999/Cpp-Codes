#include <iostream>
using namespace std;

class a{
public:
void name(string c){
    cout << "My name is " << c << endl;
}
void name(string p, string q){
    cout << "I am a " << p << " of CSE" << endl;
    name("MALIHA");
    cout << "I am a " << q << " of CSE" << endl;
}
void name(){
    name("FARHANA");
    name("FACULTY", "STUDENT");
}
};
int main(){
    a obj;
    obj.name();
    return 0;
}
