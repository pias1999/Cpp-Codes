#include<iostream>
using namespace std;

class calculation;
class employee{
    private :
        int basic_slary;
        int house_alllowance;
        int medical_allowance;
        int transportation;
        int tax;
       // int remained_salary;

    public:

friend class calculation;

};
class calculation{
 public:
     int total_income;
     void input(employee &ob){
           cout<<"enter basic salary : ";
           cin>>ob.basic_slary;

        }
    void show(employee &ob){

        ob.house_alllowance=(15*ob.basic_slary)/100;

        cout<<"\nhouse allowance : "<<ob.house_alllowance<<endl;
ob.medical_allowance=(10*ob.basic_slary)/100;

    cout<<"\nmedical allowance : "<<ob.medical_allowance<<endl;
ob.transportation=(5*ob.basic_slary)/100;

    cout<<"\ntransportation allowance : "<<ob.transportation<<endl;

    total_income=ob.basic_slary+ob.house_alllowance+ob.medical_allowance+ob.transportation;

    cout<<"total income = "<<total_income<<endl;
    }


    void calcu(employee &ob){

       if(total_income<=25000){
        cout<<"No tax"<<endl;
        cout<<" salary  is : " <<total_income;


       }

    if(total_income<=50000&&total_income>25000){
        cout<<" tax : 5% of basic salary :="<<(5*total_income)/100<<endl;
        cout<<"salary after tax deduction : " <<total_income-(5*total_income)/100<<endl;


       }
        if(total_income<=75000&&total_income>50000){
       cout<<" tax : 10% of basic salary="<<(10*total_income)/100<<endl;
        cout<<"salary after tax deduction : " <<total_income-(10*total_income)/100<<endl;


       }
        if(total_income<=85000&&total_income>75000){
       cout<<" tax : 15% of basic salary="<<(15*total_income)/100<<endl;
        cout<<"salary after tax deduction : "<<total_income-(15*total_income)/100<<endl;


       }

        if(total_income<=100000&&total_income>85000){
       cout<<" tax : 20% of basic salary="<<(20*total_income)/100<<endl;

        cout<<" salary after tax deduction : " <<total_income-(20*total_income)/100<<endl;


       }
         if(total_income>100000){
       cout<<" tax : 25% of basic salary="<<(25*total_income)/100<<endl;

        cout<<" salary after tax deduction : " <<total_income-(25*total_income)/100<<endl;


       }


    }

};

int main(){

    employee obj;
    //obj.input();
    calculation obj1;
    obj1.input(obj);
    obj1.show(obj);
    obj1.calcu(obj);

}
