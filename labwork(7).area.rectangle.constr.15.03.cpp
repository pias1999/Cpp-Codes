#include <iostream>
using namespace std;

class rectangle{
public:
    double height, width;
    rectangle(){
        cout << "Enter Height: ";
        cin >> height;
        cout << "Enter Width: ";
        cin >> width;
    }
};

int main(){
    rectangle obj;
    double area = obj.height * obj.width;
    cout << "Area of the Rectangle is: " << area;

    return 0;
}
