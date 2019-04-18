#include <iostream>
using namespace std;

class time{
public:
	int hours;
	int minutes;
public:
	void settime(int h, int m){
		hours = h; minutes = m;
	}
	time sum(time);
	void showtime();
};

time time :: sum(time TM){
	time t;
	t.minutes = minutes + TM.minutes;
	t.hours = t.minutes / 60;
	t.minutes = t.minutes % 60;
	t.hours += hours + TM.hours;
	return t;
}

void time :: showtime(){
	cout << hours << " hours and " << minutes << " minutes" << endl;
}


int main(){
	time T1,T2,T3;
	T1.settime(2,45);
	T2.settime(3,30);
	T3 = T1.sum(T2);

	cout << "Time 1 is: ";
	T1.showtime();
	cout << endl << endl;
	cout << "Time 2 is: ";
	T2.showtime();
	cout << endl << endl;
	cout << "Time 3 is: ";
	T3.showtime();

	return 0;
}
