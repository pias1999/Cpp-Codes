#include <iostream>
using namespace std;

class A{
public:
   int a,b;
   //Default constructor
   A(){
       a = 10;
       b = 9;
   }
   //Parameterized constructor
   A(int p, int q){
       a /*variable*/ = /*value*/ p;
       b /*variable*/ = /*value*/ q;
   }
   //Copy constructor
   A(A &obj){
       a = obj.a;
       b = obj.b;
   }
};

int main(){
   A obj1;
   cout << "Default constructor and value of obj1:" << endl;
   cout << obj1.a << endl;
   cout << obj1.b << endl;

   A obj2(70,80);
   cout << "Parameterized constructor and value of obj2:" << endl;
   cout << obj2.a << endl;
   cout << obj2.b << endl;

   A obj3(obj2);
   cout << "Copy constructor and value of obj3:" << endl;
   cout << obj3.a << endl;
   cout << obj3.b << endl;

   //Another way of Copy constructor
   cout << "Copy constructor and value of obj4:" << endl;
   A obj4 = obj1;
   cout << obj4.a << endl;
   cout << obj4.b << endl;

   return 0;
}
