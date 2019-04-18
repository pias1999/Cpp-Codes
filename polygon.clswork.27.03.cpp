#include <iostream>
using namespace std;

class Rectangle;
class Triangle;
class polygon{
private:
    int ph, pw;
public:
    polygon(int height, int width){
        ph = height; pw = width;
    }
    friend class Rectangle;
    friend class Triangle;
};

class Rectangle{
public:
    int height, width;
    void area(polygon &ob){
        height = ob.ph;
        width = ob.pw;
        cout << "Calculating the area of Rectangle:" << endl << endl;
        cout << "Enter Height: ";
        cin >> height;
        cout << "Enter Width: ";
        cin >> width;
        cout << "Area of the Rectangle is: " << height * width << endl;
    }
};

class Triangle{
public:
    int height, width;
    void area(polygon &ob){
        height = ob.ph;
        width = ob.pw;
        cout << endl << "Calculating the area of Triangle:" << endl << endl;
        cout << "Enter Height: ";
        cin >> height;
        cout << "Enter Base: ";
        cin >> width;
        cout << "Area of the Triangle is: " << 0.5 * height * width;
    }
};

int main(){
    polygon obj1(1,4);
    Rectangle obj2;
    Triangle obj3;
    obj2.area(obj1);
    obj3.area(obj1);

    return 0;
}
