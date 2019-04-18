#include <iostream>
using namespace std;

class even{
public:
    void odd(){
    int i, n, num;

    cout << "How many numbers you wanna input: ";
    cin >> n;

    for(i = 1; i <= n;i++){
        cout << "Enter number "<< i << ": ";
        cin >> num;

        if ( num % 2 == 0){
        cout << num << " is an EVEN number." << endl << endl;
    }else{
        cout << num << " is an ODD number." << endl << endl;
    }
    }
}
};

int main(){
    even obj;
    obj.odd();

    return 0;
}

