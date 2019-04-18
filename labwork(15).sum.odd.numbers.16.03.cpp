#include <iostream>
using namespace std;

int main(){
    int i, min, max;
    int sum = 0;

    cout << "Enter minimum limit: ";
    cin >> min;
    cout << "Enter maximum limit: ";
    cin >> max;
    cout << "Odd numbers in the given range are: ";
    for(i = min; i <= max; i++){
        if(i % 2 != 0){
        sum += i;
        cout << i << "\t";
    }
  }
    cout << endl << "Sum of the Odd numbers: " << sum;

  return 0;
}
