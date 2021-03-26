#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	for(int i = 0 ; i < str.length(); i++)
    {
		if(str[i] == 'Z') str[i] = 'A';// не z,( можно начинать с а)
		if(str[i] == '9') str[i] = '0';// не 9, ( можно начинать с 9)
		else str[i]++;// тогда + 1 сдвиг буквы (a->b), то же самое и с числами
	}
	cout << str << endl;
	return 0;
}
