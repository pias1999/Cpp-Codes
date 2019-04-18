#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char str[100], temp;
	int i = 0, j;

	cout << "Enter a String : ";
	cin.get(str, 100);

	i = 0;
	j = strlen(str) - 1;
	while(i < j){
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	cout << endl << "Reverse of the String is: " << str;

	return 0;
}
