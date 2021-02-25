//# -
//1 прога по С++ (1 вариант)
//Вялых Дарья СБС-002 п.1
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    //начальная скорость
    int v=1;
    //время полёта
    int t=9;
    //ускорение свободного падения
    double g=9.8;
    //угол, под которым тело брошено по отношению к горизонту
    double a;
    a=asin((g*t)/(2*v));
    cout<<"a= "<<a<<"\n";
    //printf("%d", a);
    return 0;
    }
