//Вялых Даша 4.1 сбс-002 пг1 

#include <stdio.h>
#include <iostream>

using namespace std;

int fib(int n)
{
    if(n < 1) return 0;
    if(n == 1) return 1;
    return fib(n - 1) + fib(n - 2);//складываем предыдущие 2 числа
}

int main()
{
    int n = 9;
    cout << fib(n) << endl;
    system("Pause");
    return 0;
}
