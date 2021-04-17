#include <iostream>
#include <cmath>
using namespace std;

class SimpleClass {
    public:
    int x;};
//Функция, для заполнения:
    void set(double *a,int H,int x){
    int i;
    a[0]=1;
    for(i=1; i<= H; i++)
    a[i]=a[i-1]*(-1)*x*x/(2*i-1)/(2*i);
    }

//Функция для вычисления косинуса:
double MyCos(double *a,int k){
double s=0;
int i;
for(i=0; i<=k; i++) s+=a[i];
return s;}

int main(){
    SimpleClass MyObj1;
    int i,N;
    double x;
    double *a;
 //Ввод параметров:
    MyObj1.x = 8;
//Создание:
    a=new double[N+1];
//Заполнение:
    set(a,N,MyObj1.x);
//Разные приближения для косинуса :
    for(i=1; i<=10; i++)
    cout<< MyCos(a,i)<<endl;
    cout << "-----------------\n";
//Точное (вычисленное встроенной функцией) значение:
    cout << "cos(x) = " << cos(MyObj1.x) << endl;
    return 0;
}
