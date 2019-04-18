#include <iostream>
#include <math.h>
using namespace std;

class area_call{
public:
   int height, width, radius;

   area_call(){
       height = 10;
       width = 9;
   }

   area_call(area_call &obj){
       radius = obj.height;
   }

   void area(double x){
       cout << "Area of triangle is: " << x * height * width << endl;
   }

   void area(){
       cout << "Area of rectangle is: " << height * width << endl;
   }
   void area(char x){
       cout << "Area of circle is: " << M_PI * (pow(radius,2));
   }

};

int main(){
   area_call triangle, rectangle;
   area_call circle(triangle);
   cout << "Height of the triangle is: " << triangle.height << endl;
   cout << "Width of the triangle is: " << triangle.width << endl;
   cout << "Height of the rectangle is: " << rectangle.height << endl;
   cout << "Width of the rectangle is: " << rectangle.width << endl;
   cout << "Radius the circle is: " << circle.radius << endl;
   triangle.area(0.5);
   rectangle.area();
   circle.area('T');

   return 0;
}
