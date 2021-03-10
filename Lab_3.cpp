#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int i;
    double a[3];
    double res=0;//переменная для хранения результата
    cout << "Введите элементы массива a: ";

    //        while(true)
    //{
    //    cout << "Введите элементы массива a: ";
    //    cin >> a[3];
    //        if(!cin)
    //    {
    //        cout << "не верно введен элемент массива a\n";
    //        cin.clear();
    //        while (cin.get() != '\n');
    //    }
    //    else break;
    //}


    for(int i = 0; i < 3; i++)
        cin >> a[i];
    for(int i = 0; i < 3; i++)
        res += a[i]*a[i];
        res = sqrt(res);
    cout << "Результат = " << res << endl;
    system("pause");
    return 0;
}
