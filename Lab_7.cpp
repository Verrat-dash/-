#include <iostream>
#include <cmath>
using namespace std;

class MyClass {
    public:
    int x;   
//Функция для вычисления косинуса:
double MyCos(double *a,int k){
double s=0;
int i;
for(i=0; i<=k; i++) s+=a[i];
return s;}

void show(){
    int i,N;
    double x;
    double *a;
//Ввод параметров:    
    cout << "Enter x = ";
    cin >> x;
    cout << "cos(x) = " << cos(x) << endl;}
};
int main(){
MyClass obj;
obj.show();
return 0;
}
