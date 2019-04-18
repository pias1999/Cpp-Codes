#include <iostream>
using namespace std;

int N;
class value{
public:
    int i;
    void Series(){
    for(i = 1; i <= N; i++){
         if(i % 2 != 0){
             cout << 1 << "\t";
    }else{
             cout << 0 << "\t";
         }
    }
    }
    void Series(int n){
    for(i = 1; i <= n; i++){
         cout << i * i<< "\t";
    }
    }
};


int main(){
    value obj;
    cout << "Enter maximum limit: ";
    cin >> N;
    cout << "Prints the Series of 1 0 1 0 1 0....." << endl;
    obj.Series();
    cout << endl << endl << "Prints the Series of 1 4 9 16 36....." << endl;
    obj.Series(N);


    return 0;
}

