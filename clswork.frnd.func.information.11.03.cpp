#include <iostream>
using namespace std;

class Person{
private:
   string name;
   double height, weight;
public:
   Person(){
       cout << "Enter your name: ";
       cin >> name;
       cout << "Enter the Height in Centimeter: ";
       cin >> height;
       cout << "Enter the Weight in Pounds: ";
       cin >> weight;
   }
public:
   friend void converter(Person ob);
};

void converter(Person ob){
    int h, i;
    h = (ob.height * 0.39) / 12;
    i = (int)(ob.height * 0.39) % 12; //Type Cast
    cout << "Your name is: " << ob.name << endl;
    cout << "Height in Foot  & Inch: " <<  h << "\'" << i << "\"" << endl;
    cout << "Weight in KG: " <<  ob.weight / 2.20;
}

int main(){
   Person obj;
   converter(obj);
   return 0;
}
