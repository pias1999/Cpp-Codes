#include<iostream>
#include<math.h>
using namespace std;

class primen{
private:
    int num1, num2;
    int found = 0, count = 0;
public:
void prime(){

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    }
    friend void output(primen ob);
};
void output(primen ob){
    int i, j;
    cout << "Prime numbers between " << ob.num1 << " to " << ob.num2 << " are: ";
    for(i = ob.num1; i <= ob.num2; i++){
            for(j = 2;j <= sqrt(i); j++){
               if(i % j == 0){
                  ob.count++;
               }
               }
               if(ob.count == 0 && i != 1){
                 ob.found++;
                 cout << i << "\t";
                 ob.count=0;
               }
               ob.count=0;
       }
}
int main(){
    primen obj;
    obj.prime();
    output(obj);

    return 0;
}
