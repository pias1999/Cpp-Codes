#include <iostream>
using namespace std;
int n;
class odd{
public:
    int i;
    void number_generation(){
    cout << "Enter maximum limit: ";
    cin >> n;

    cout << "Odd numbers in given range are: ";
    for(i = 0; i <= n; i++){

         if(i % 2 != 0)
             cout << i << "\t";
    }
    }
};

class even{
public:
    int i;
    void number_generation(){
    cout << "\n\nEven numbers in given range are: ";
    for(i =0; i <= n; i++){

         if(i % 2 == 0){
             cout << i << "\t";
         }
    }
    }
};

int main(){
    odd obj;
    obj.number_generation();
    even obj2;
    obj2.number_generation();

    return 0;
}

