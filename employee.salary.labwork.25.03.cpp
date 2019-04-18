#include <iostream>
using namespace std;

class calculation;
class employee{
private:
    string name;
    int id, bs, ha, ma, ta;

public:
    friend class calculation;
};

class calculation{
public:
    void salary(employee &ob){
    cout << "Enter employees name: ";
    getline(cin,ob.name);
    cout << "Enter employees ID: ";
    cin >> ob.id;
    cout << "Enter employees salary: ";
    cin >> ob.bs;

    ob.ha = (ob.bs * 15) / 100;
    ob.ma = (ob.bs * 10) / 100;
    ob.ta = (ob.bs * 5) / 100;;
    cout << "House Allowance amount: " << ob.ha << endl << endl;
    cout << "Medical Allowance amount: " << ob.ma << endl << endl;
    cout << "Transportation Allowance amount: " << ob.ta << endl << endl;
  }

  void output(employee &ob){
      int total = ob.bs + ob.ha + ob.ma + ob.ta;
      cout << "Total salary after merging all: " << total << endl << endl;

      if(total >= 0 && total <= 25000){
        cout << "No tax." << endl;
        cout << "Total salary after deducting 0% tax: " << total - (total * 0.00) << endl << endl;
      }else if(total >= 25001 && total <= 50000){
        cout << "5% tax deduction: " << total * 0.05 << endl;
        cout << "Total salary after deducting 5% tax: " << total - (total * 0.05) << endl << endl;
      }else if(total >= 50001 && total <= 75000){
        cout << "10% tax deduction: " << total * 0.10 << endl;
        cout << "Total salary after deducting 10% tax: " << total - (total * 0.10) << endl << endl;
      }else if(total >= 75001 && total <= 85000){
        cout << "15% tax deduction: " << total * 0.15 << endl;
        cout << "Total salary after deducting 15% tax: " << total - (total * 0.15) << endl << endl;
      }else if(total >= 85001 && total <= 100000){
        cout << "20% tax deduction: " << total * 0.20 << endl;
        cout << "Total salary after deducting 20% tax: " << total - (total * 0.20) << endl << endl;
      }else if(total > 100000){
        cout << "25% tax deduction: " << total * 0.25 << endl;
        cout << "Total salary after deducting 25% tax: " << total - (total * 0.25) << endl << endl;
      }
   }
};

int main(){
    employee obj1;
    calculation obj2;
    obj2.salary(obj1);
    obj2.output(obj1);

    return 0;
}
