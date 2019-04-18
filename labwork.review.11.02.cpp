#include <iostream>
using namespace std;

class student{
  public:
    string stdn_name;
    int stdn_id;
    string course1, course2, course3;
    int cour1_mark, cour2_mark, cour3_mark;

    void input(){
         cout << "\nEnter student name: ";
         cin >> stdn_name;
         cout << "Enter STUDENT ID: ";
         cin >>stdn_id;
         cout << "Enter Course 1 name: ";
         cin >> course1;
         cout << "Enter Course 2 name: ";
         cin >> course2;
         cout << "Enter Course 3 name: ";
         cin >> course3;
         cout << "Enter Course 1 mark: ";
         cin >> cour1_mark;
         cout << "Enter Course 2 mark: ";
         cin >> cour2_mark;
         cout << "Enter Course 3 mark: ";
         cin >> cour3_mark;

    }
    void output(){
         cout << "Your name is: " << stdn_name << "\nYour STUDENT ID is: " << stdn_id << "\nCourse 1 is: " << course1;
         cout << "\nCourse 2 is: " << course2 << "\nCourse 3 is: " << course3 << "\nMark of Course 1 is: " << cour1_mark;
         cout << "\nMark of Course 2 is: " << cour2_mark << "\nMark of Course 3 is: " << cour3_mark;
    }
};

int main(){
    student obj1, obj2, obj3, obj4, obj5;
    obj1.input();
    obj1.output();
    obj2.input();
    obj2.output();
    obj3.input();
    obj3.output();
    obj4.input();
    obj4.output();
    obj5.input();
    obj5.output();

    return 0;
}
