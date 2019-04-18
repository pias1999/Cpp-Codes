#include <iostream>
using namespace std;

class Person
{
public:
   string name;
   int id,sal;
   void input()
   {
       cout << "Input the ID: ";
       cin >> id;
       cout << "Input the Name: ";
       cin >> name;
   }

   void salary()
   {
       cout << "Input the Salary: ";
       cin >> sal;
   }
};

class Faculty : public Person
{
public:
   void teach()
   {
       input();
       salary();
       int i,n;
       string cname[10];
       cout << "How many courses the Faculty is taking: ";
       cin >> n;
       cout << "Name of the Courses are: " << endl;
       for (i=1;i<=n;i++)
       {
           cin >> cname[i];
           cout << endl;
       }

       cout << "*****Information of Faculty*****" << endl;
       cout << "Name: " << name << endl;
       cout << "ID: " << id << endl;
       cout << "Salary: " << sal << endl;
       cout << "Number of the Courses: " << n << endl;
       cout << "Name of the Courses" << cname[i] << endl;
       for (i=1;i<=n;i++)
           {
               cout << cname[i];
               cout << "\t";
           }
   }
};

class Student : public Person
{
public:
   void learn()
   {
       input();
       salary();
       int j,s;
       string sname;
       cout << "How many courses are completed: ";
       cin >> s;
       cout << "Name of the Courses that are completed: " << endl;
       for (j=1;j<=s;j++)
       {
           cin >> sname[j];
           cout << endl;
       }
       cout << "*****Information of Student*****" << endl;
       cout << "Name: " << name << endl;
       cout << "ID: " << id << endl;
       cout << "Salary: " << sal << endl;
       cout << "Number of the Courses that are completed: " << s << endl;
       cout << "Name of the Courses that are completed" << sname[j] << endl;
       for (j=1;j<=s;j++)
           {
               cout << sname[j];
               cout << "\t";
           }
   }
};

class Admin : public Person
{
public:
   void evaluation()
   {
       input();
       salary();
       int k,a;
       string aname;
       cout << "How many evaluation are done: ";
       cin >> a;
       cout << "Name of the Courses are: " << endl;
       for (k=1;k<=a;k++)
       {
           cin >> aname[k];
           cout << endl;
       }
       cout << "*****Information of Admin*****" << endl;
       cout << "Name: " << name << endl;
       cout << "ID: " << id << endl;
       cout << "Salary: " << sal << endl;
       cout << "Number of the Courses that are completed: " << a << endl;
       cout << "Name of the Courses that are completed" << aname[k] << endl;
       for (k=1;k<=a;k++)
           {
               cout << aname[k];
               cout << "\t";
           }
   }
};

class Cleaner : public Person
{
public:
   void clean()
   {
       input();
       salary();
       int c,l;
        string clname;
       cout << "How many floors are cleaned: ";
       cin >> c;
       cout << "Name of the Floors that are cleaned: " << endl;
       for (l=1;l<=c;l++)
       {
           cin >> clname[l];
           cout << endl;
       }
       cout << "*****Information of Cleaner*****" << endl;
       cout << "Name: " << name << endl;
       cout << "ID: " << id << endl;
       cout << "Salary: " << sal << endl;
       cout << "Number of the Courses that are completed: " << c << endl;
       cout << "Name of the Courses that are completed" << clname[l] << endl;
       for (l=1;l<=c;l++)
           {
               cout << clname[l];
               cout << "\t";
           }
   }
};

int main()
{
   cout << "Running Faculty Class" << endl;
   Faculty obj1;
   obj1.teach();
   cout << endl << endl << "Running Student Class" << endl;
   Student obj2;
   obj2.learn();
   cout << endl << endl << "Running Admin Class" << endl;
   Admin obj3;
   obj3.evaluation();
   cout << endl << endl << "Running Cleaner Class" << endl;
   Cleaner obj4;
   obj4.clean();
   cout << endl;
}
