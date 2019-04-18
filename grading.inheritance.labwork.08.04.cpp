#include <iostream>
using namespace std;

class G{
public:
    void grade(double a, double b, double c){
        double average;
        average = (a + b + c) / 3;
        cout << endl << "Average of " << a << ", " << b << " and " << c << " is: " << average << endl;
        if(average >= 0 && average <= 50){
            cout << "You have Failed";
        }else if(average >= 51 && average <= 59){
            cout << "Your grade is: D";
        }else if(average >= 60 && average <= 69){
            cout << "Your grade is: C";
        }else if(average >= 70 && average <= 79){
            cout << "Your grade is: B";
        }else if(average >= 80 && average <= 89){
            cout << "Your grade is: A-";
        }else if(average >= 90 && average <= 100){
            cout << "Your grade is: A";
        }else {
            cout << "Error";
        }
    }
};

class I : public G{
public:
    string name, cour1, cour2, cour3;
    double id, mark1, mark2, mark3, total;
    void input(){
        cout << "Enter Students Name: ";
        getline(cin,name);
        cout << "Enter Student ID: ";
        cin >> id;
        cout << endl << "Enter Course 1 Name: ";
        cin >> cour1;
        cout << endl << "Enter Course 2 Name: ";
        cin >> cour2;
        cout << endl << "Enter Course 3 Name: ";
        cin >> cour3;
        cout << endl << "Enter " << cour1 << " Mark: ";
        cin >> mark1;
        cout << endl << "Enter " << cour2 << " Mark: ";
        cin >> mark2;
        cout << endl << "Enter " << cour3 << " Mark: ";
        cin >> mark3;


        cout << endl << "Total Marks of " << cour1 << ", " << cour2 << " and " << cour3 << " is: " << mark1 + mark2 + mark3 << endl;
        grade(mark1, mark2, mark3);
    }
};

int main(){
    I obj;
    obj.input();
}
