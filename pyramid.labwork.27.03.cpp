#include <iostream>
using namespace std;

class Pyramid{
private:
    int i, j, rows;
public:
    void pyramid(){
    cout << "Enter number of rows: ";
    cin >> rows;
  }
  friend void Fpyramid(Pyramid ob);
};

void Fpyramid(Pyramid ob){
    for(ob.i = 1; ob.i <= ob.rows; ob.i++){
        for(ob.j = 1; ob.j <= ob.i; ob.j++){
            cout << ob.j << "   ";
        }
        cout << "\t" << endl << endl;
   }
    for(ob.i = ob.rows; ob.i >= 1; ob.i--){
        for(ob.j = 1; ob.j <= ob.i; ob.j++){
            cout << ob.j << "   ";
        }
        cout << "\t" << endl << endl;
   }
}

int main(){
    Pyramid obj;
    obj.pyramid();
    Fpyramid(obj);

    return 0;
}
