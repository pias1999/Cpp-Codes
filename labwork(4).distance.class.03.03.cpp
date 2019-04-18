#include <iostream>
using  namespace std;

class Distance{
public:
	int feet;
	float inches;
public:
	void set(int ft, float in){
		feet = ft; inches = in;
	}
	Distance add(Distance);
	void disp();
};

Distance Distance :: add(Distance D){
	Distance t;
	t.inches = inches + D.inches;
	t.feet = 0;
	if(t.inches >= 12.0){
		t.inches -= 12.0;
		t.feet++;
	}
	t.feet += feet + D.feet;
	return t;
}

void Distance :: disp(){
	cout << feet << "\'" << inches <<"\" ";
}


int main(){
	Distance d1,d2,d3;
	d1.set(10,7.1);
	d2.set(23,5.5);
	d3 = d1.add(d2);

	cout << "Distance 1 is: ";
	d1.disp();
	cout << endl << endl;
	cout << "Distance 2 is: ";
	d2.disp();
	cout << endl << endl;
	cout << "Distance 3 is: ";
	d3.disp();

	return 0;
}
