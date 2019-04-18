#include <iostream>
using namespace std;

class student{
  public:
    string stdn_name;
    int stdn_id;
    string course1, course2, course3;
    int cour1_mark, cour2_mark, cour3_mark;

    void input(){
         cout << "\nEnter student's name: ";
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
         cout << "\nYour name is: " << stdn_name << "\nYour STUDENT ID is: " << stdn_id << "\nCourse 1 is: " << course1;
         cout << "\nCourse 2 is: " << course2 << "\nCourse 3 is: " << course3 << "\nMark of Course 1 is: " << cour1_mark;
         cout << "\nMark of Course 2 is: " << cour2_mark << "\nMark of Course 3 is: " << cour3_mark;
         cout << "\n\n* * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
    }
};

int main(){
    student obj[5];
    int i;
    for(i = 0;i < 5;i++){
        cout << "Input information for student: " << i+1;
        obj[i].input();
    }
    for(i = 0;i < 5;i++){
        cout << "\nInformation of student: " << i+1;
        obj[i].output();
    }

    return 0;
}
