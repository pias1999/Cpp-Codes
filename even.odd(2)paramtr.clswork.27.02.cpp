#include <iostream>
using namespace std;

class odd{
public:
    int i;
    void number_generation(int p){

    cout << "Odd numbers in given range are: ";
    for(i = 0; i <= p; i++){

         if(i % 2 != 0)
             cout << i << "\t";
    }
    }
};

class even{
public:
    int i;
    void number_generation(int p){
    cout << "\n\nEven numbers in given range are: ";
    for(i = 0; i <= p; i++){

         if(i % 2 == 0){
             cout << i << "\t";
         }
    }
    }
};

int main(){
    int n;
    cout << "Enter maximum limit: ";
    cin >> n;

    odd obj;
    obj.number_generation(n);
    even obj2;
    obj2.number_generation(n);

    return 0;
}

