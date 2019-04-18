#include <iostream>
using namespace std;

class even{
private:
    int n;
public:
    void input(){
    cout << "How many numbers you wanna input: ";
    cin >> n;
    }
    friend void output(even ob);
};

void output(even ob){
    int i, num;
    for(i = 1; i <= ob.n;i++){
        cout << "Enter number "<< i << ": ";
        cin >> num;

        if ( num % 2 == 0){
        cout << num << " is an EVEN number." << endl << endl;
    }else{
        cout << num << " is an ODD number." << endl << endl;
    }
    }
}

int main(){
    even obj;
    obj.input();
    output(obj);

    return 0;
}
