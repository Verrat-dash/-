//Лаб 3, 3.1||Вялых Даша СБС-002 1п.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int i;
    double a[3];
    double res = 0; //переменная для хранения результата
    int index = 0; //переменная для хранения результатa

            while(index < 3) {
        cout << "Введите элементы массива a: ";
        cin >> a[index];

            if(!cin) {
            cout << "не верно введен элемент массива a\n";
            cin.clear();
            cin.ignore(32767,'\n');
        } else {
            index += 1;
        }
    }

    for(int i = 0; i < 3; i++) 
        res += a[i]*a[i];
        res = sqrt(res);
    
    cout << "Результат = " << res << endl;
    system("pause");
    return 0;
}
