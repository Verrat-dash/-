#include <iostream>
#include <cmath>
using namespace std;

class SimpleClass {
    public:
    int x;
    void message() // функция (метод класса) выводящая сообщение на экран
    {
        cout << "\Shto-to sdelal: Classes and Objects in C + +\n";
    }
    };
//Функция, для заполнения массива:
    void setK(double *a,int H,int x){
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
    MyObj1.x = 8;
//Создание массива:
    a=new double[N+1];
//Заполнение массива:
    setK(a,N,MyObj1.x);
//Разные приближения для косинуса :
    for(i=1; i<=10; i++)
    cout<< MyCos(a,i)<<endl;
    cout << "-----------------\n";
    cout << "cos(x) = " << cos(MyObj1.x) << endl;

    SimpleClass objSimpleClass;
    objSimpleClass.message(); // вызов функции класса message

    system("pause");
    return 0;
}
