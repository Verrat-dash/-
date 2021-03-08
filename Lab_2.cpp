//2 прога по С++ (1 вариант)
//Вялых Дарья СБС-002 п.1

#include<iostream>
#include<cmath>

using namespace std;
const int N = 100;//max cos

double cos(double c, int N) {
    int n;
    double s = 1, q = c;
    for (int n = 1; n <= N; n++) {

        q *= (-1)*c*c / (2 * n) / (2 * n - 1);
        s = s + q;

    }
    return s;
}

int main() {
    int i, m = 7; //дабы 7 первых косинусов высвечивалось(m)
    double x;
    cout<< "Enter only a number \n";
    //cout << "Enter x=";//набираем x
   // cin >> x;
            while(true)
        {
            cout << "Enter x= : ";
            cin >> x;
            if(!cin)
            {
            cout << "x is not entered correctly\n"; //x вводится неправильно
            cin.clear();
            while (cin.get() != '\n');
            }
            else break;
        }
    for (i = 1; i <= m; i++) {
        cout << i << ":cos(" << x << ")=" << cos(x, i) << "\n";}
    cout << "-----------------\n";//чтобы была пустая строка
    cout << N << ":cos(" << x << ")=" << cos(x) << "\n";
    cout << "cos(x)=" << cos(x) << "\n";

    return 0;
}
