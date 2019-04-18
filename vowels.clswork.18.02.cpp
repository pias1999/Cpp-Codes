#include <iostream>
using namespace std;

class alphabet{
public:
    int i, n;
    char alp[26];
    int vow = 0;

    void vowel(){

         cout << "Enter the size of the array: ";
         cin >> n;
         for(i = 1; i <= n; i++){
                cout << "Enter Alphabet " << i << ": ";
                cin >> alp[i];
         }
         cout << "\n* * * * * * * * * * * * * * * * * * * * * * * * * *\n\n";
    }
         void vowel_output(){
         for(i = 1; i <= n; i++){

            if(alp[i] == 'A' || alp[i] == 'E' || alp[i] == 'I' || alp[i] == 'O' || alp[i] == 'U' ||
                alp[i] == 'a' || alp[i] == 'e' || alp[i] == 'i' || alp[i] == 'o' || alp[i] == 'u'){
                vow++;
                cout << alp[i] << " is a Vowel.\t" << "Position: " << i << ".\n";
          }else{
              cout << alp[i] << " is a Consonant.\n";
          }
        }
        cout << "\n* * * * * * * * * * * * * * * * * * * * * * * * * *\n\n";
        cout << "There are " << vow << " Vowels.";
      }

};

int main(){
    alphabet obj;
    obj.vowel();
    obj.vowel_output();
    return 0;
}



