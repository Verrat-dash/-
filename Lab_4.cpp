//Вялых Даша 4.1 сбс-002 пг1 

#include <stdio.h>
#include <iostream>

using namespace std;

int fib(int n)
{
    if (n > 2)
    return fib(n-1) + fib(n-2);
    else return 1;
}

int main()
{
    cout << fib(6) << endl;
    return 0;
}
