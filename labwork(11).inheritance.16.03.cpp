#include <iostream>
using namespace std;

class Animal{
public:
    int age;
    string name;
    void set_value(string b,int a){
        name = b;
		age = a;
	 }
};

class Zebra : public Animal{
public:
    void zebra(){
    cout << "The Zebra named " << name << " is " << age << " years old. " << name << " came from Africa." << endl;
    }
};

class Dolphin : public Animal{
public:
    void dolphin(){
    cout << "The Dolphin named "<< name << " is " << age << " years old. " << name << " came from New Zealand." << endl;
    }
};
int main (){
    Zebra obj1;
	Dolphin obj2;
	string zeb;
	string dol;
	int zeb_age, dol_age;
	cout << "Enter the name of the Zebra: ";
	getline(cin,zeb);
	cout << "Enter the name of the Dolphin: ";
	getline(cin,dol);
	cout << "Enter the age of the Zebra: ";
	cin >> zeb_age;
	cout << "Enter the age of the Dolphin: ";
	cin >> dol_age;

	obj1.set_value(zeb,zeb_age);
	obj2.set_value(dol,dol_age);

	obj1.zebra();
	obj2.dolphin();

	return 0;
}
