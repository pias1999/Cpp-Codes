#include<iostream>
#include<math.h>
using namespace std;

class primen{
public:
    int i, j, num1, num2;
    int found = 0, count = 0;
void prime(){

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Prime numbers between " << num1 << " to " << num2 << " are: ";
    for(i = num1; i <= num2; i++){
            for(j = 2;j <= sqrt(i); j++){
               if(i % j == 0){
                  count++;
               }
               }
               if(count == 0 && i != 1){
                 found++;
                 cout << i << "\t";
                 count=0;
               }
               count=0;
       }
}
};

int main(){
    primen obj;
    obj.prime();

    return 0;
}
