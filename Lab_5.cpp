#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char *str = new char[50];
//    char r[] = " абвгдеёжзийклмнопрстуфхцчшщъыьэюя";
    char r[] = " abcdefghijklmnopqrstuvwxyz";
    cout << "Введите слово английскими буквами : ";
    gets(str);
    cout << "То, что получилось(Ура!): ";
    for(int i=0;i<strlen(str);i++)
    {
        for(int j=0;j<strlen(r);j++)
        {
            if(str[i] == r[j])
            {
                cout << 0+j;
            }
        }
    }
    cout << "\n";
    system("pause");
}
