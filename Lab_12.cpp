#include<iostream>
#include<cstdlib>
using namespace std;
template <class X,int n> class MyClass{
public:
    //Поле класса - массив
    X xarray[n];
    MyClass(){
    //генератор случайных чисел
    srand(1);
    for(int i=0;i<n;i++){
        xarray[i] = (X)(10+rand()%10);
        }
    }
    void getx(){
        for(int i=0;i<n;i++) cout<<xarray[i]<<" ";
        cout<<endl;}
    };
int main(){
  //размеры массивов-полей класса
    const int n=8;
    MyClass<int,n> a;
    a.getx();
    return 0;
}
