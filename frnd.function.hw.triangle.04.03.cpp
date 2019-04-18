#include <iostream>
using namespace std;

class triangle{
private:
    double base, height;
public:
    void input(){
    cout << "Enter Base: ";
	cin >> base;

	cout << "Enter Height: ";
	cin >> height;
    }
    friend void output(triangle ob);
 };

 void output(triangle ob){
     double area;

     area = 0.5 * ob.base * ob.height;
     cout << "Area of the triangle is: " << area;
 }

 int main(){
     triangle obj;
     obj.input();
     output(obj);

     return 0;
 }
