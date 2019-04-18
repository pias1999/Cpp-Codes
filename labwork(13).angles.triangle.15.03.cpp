#include <iostream>
using namespace std;

void triangle(){
	int ang1, ang2, ang3;

	cout << "Enter 1st Angle: ";
	cin >> ang1;
	cout << "Enter 2nd Angle: ";
	cin >> ang2;
	cout << "Enter 3rd Angle: ";
	cin >> ang3;
	int total = ang1 + ang2 + ang3;
	cout << "Total Angle: " << total << endl;

	if(total == 180){
		cout << "The Angles make a Triangle.";
	}else{
		cout << "The Angles don't make a Triangle.";
	}
}

int main(){
    triangle();

    return 0;
}
