#include <iostream>
using namespace std;

class value{
public:
    int Absolute(int num){
        int p;
        if(num < 0){
            p = (-1) * num;
            return p;
        }else{
            p = num;
            return p;
        }
}
    double Absolute(double num){
        double p;
        if(num < 0){
        p = (-1) * num;
        return p;
        }else{
            p = num;
            return p;
        }
    }
};

    int main(){
        value obj;
        cout << obj.Absolute(-10) << endl;
        cout << obj.Absolute(-12.55);

        return 0;
    }
