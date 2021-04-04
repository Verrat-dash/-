#include <iostream>
#include <Windows.h>
using namespace std;

void func()
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
        for(int j=0;j<strlen(r);j++)//пока находится в r будет выводиться//каждую букву можно заменить, т.е если напишем j=j+2, то будет заменяться каждый второй символ
        {
            if(str[i] == r[j])
            {
                cout << 0+j;//алфавит начинается с 0, т.е с " "(пробела)
            }
        }
    }
}
int main() {
    func();
    cout << "\n";
    system("pause");
    return 0;
}
