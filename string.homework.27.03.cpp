#include <iostream>
#include <string.h>
using namespace std;

class B;
class A{
private:
    char str[50] = "Ashikuzzaman";
public:
    friend void output(A ob1, B ob2);
};

class B{
private:
    char str[50] = "Pias";
public:
    friend void output(A ob1, B ob2);
};

void output(A ob1, B ob2){
    cout << "First original Value: " << ob1.str << endl;
    cout << "Length of " << ob1.str << " is: " << strlen (ob1.str) << endl << endl;
    cout << "Second original Value: " << ob2.str << endl;
    cout << "Length of " << ob2.str << " is: " << strlen (ob2.str) << endl << endl;
    cout << "Value after merging two classes: " << strcat(strcat(ob1.str, " "),ob2.str) << endl << endl;
    cout << "Length of " << ob1.str << " is: " << strlen (ob1.str) << endl << endl;
    strcpy(ob1.str,ob2.str); //copying str of class B to str of class A.
    cout << "After Copy: " << ob1.str << endl << endl;
    cout << "Length of " << ob1.str << " is: " << strlen(ob1.str) << endl << endl; //calculating the length of ob1.str.
    strcat(ob1.str,ob2.str); //adding str of class A onto the end of str of class B.
    cout << "After Joining: " << ob1.str << endl;
    cout << "Length of " << ob2.str << " is: " << strlen(ob1.str) << endl;
}
int main(){
    A obj1;
    B obj2;
    output(obj1,obj2);

    return 0;
}
