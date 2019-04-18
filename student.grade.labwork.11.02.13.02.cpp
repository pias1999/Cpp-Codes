#include <iostream>
using namespace std;

class student{
  public:
    string grade;
    string stdn_name;
    int stdn_id;
    string course1, course2, course3;
    double cour1_mark, cour2_mark, cour3_mark;

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
         cout << "Enter marks of  " << course1 << ": ";
         cin >> cour1_mark;

         cout << "Enter marks of  " << course2 << ": ";
         cin >> cour2_mark;

         cout << "Enter marks of  " << course1 << ": ";
         cin >> cour3_mark;

    }
    void output(){
         cout << "\nYour name is: " << stdn_name << "\nYour STUDENT ID is: " << stdn_id << "\nCourse 1 is: " << course1;
         cout << "\nCourse 2 is: " << course2 << "\nCourse 3 is: " << course3;
         if(cour1_mark >= 95 && cour1_mark <= 100){
            grade = "A+";
         }else if(cour1_mark >= 85 && cour1_mark <= 94){
            grade = "A";
         }else if(cour1_mark >= 80 && cour1_mark <= 84){
            grade = "A-";
         }else if(cour1_mark >= 75 && cour1_mark <= 79){
            grade = "B+";
         }else if(cour1_mark >= 70 && cour1_mark <= 74){
            grade = "B";
         }else if(cour1_mark >= 60 && cour1_mark <= 69){
            grade = "C";
         }else if(cour1_mark >= 50 && cour1_mark <= 59){
            grade = "D";
         }else{
            grade = "F";
         }
         cout << "\nCourse name, Marks & Grade is: " << course1 << "\t" << cour1_mark << "\t" << grade;

         if(cour2_mark >= 95 && cour2_mark <= 100){
            grade = "A+";
         }else if(cour2_mark >= 85 && cour2_mark <= 94){
            grade = "A";
         }else if(cour2_mark >= 80 && cour2_mark <= 84){
            grade == "A-";
         }else if(cour2_mark >= 75 && cour2_mark <= 79){
            grade = "B+";
         }else if(cour2_mark >= 70 && cour2_mark <= 74){
            grade = "B";
         }else if(cour2_mark >= 60 && cour2_mark <= 69){
            grade = "C";
         }else if(cour2_mark >= 50 && cour2_mark <= 59){
            grade = "D";
         }else{
            grade = "F";
         }
         cout << "\nCourse name, Marks & Grade is: " << course2 << "\t" << cour2_mark << "\t" << grade;

         if(cour3_mark >= 95 && cour3_mark <= 100){
            grade = "A+";
         }else if(cour3_mark >= 85 && cour3_mark <= 94){
            grade = "A";
         }else if(cour3_mark >= 80 && cour3_mark <= 84){
            grade = "A-";
         }else if(cour3_mark >= 75 && cour3_mark <= 79){
            grade = "B+";
         }else if(cour3_mark >= 70 && cour3_mark<= 74){
            grade = "B";
         }else if(cour3_mark >= 60 && cour3_mark <= 69){
            grade = "C";
         }else if(cour3_mark >= 50 && cour3_mark <= 59){
            grade = "D";
         }else{
            grade = "F";
         }
         cout << "\nCourse name, Marks & Grade is: " << course3 << "\t" << cour3_mark << "\t" << grade;
         cout << "\n\n* * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
    }
};

int main(){
    student obj[5];
    int j;
    int i;
    cout << "How many students: ";
    cin >> j;
    for(i = 0;i < j;i++){
        cout << "Input information for student: " << i+1;
        obj[i].input();
    }
    for(i = 0;i < j;i++){
        cout << "\nInformation of student: " << i+1;
        obj[i].output();
    }

    return 0;
}
