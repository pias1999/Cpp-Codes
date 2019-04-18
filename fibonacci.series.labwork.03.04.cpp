#include <iostream>
using namespace std;

class fibonacci{
public:
    int i, n;
    int term1 = 1;
    int term2 = 1;
    int next;

    void output(){
    cout << "|Enter the range of Fibonacci series: ";
    cin >> n;

    cout << n << " range Fibonacci Series: ";

    for(i = 1; i <= n; i++){
        cout << term1 << "\t";
        next = term1 + term2;
        term1 = term2;
        term2 = next;
    }
  }
};

int main(){
    fibonacci obj;
    obj.output();

    return 0;
}
