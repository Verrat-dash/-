#include<iostream>
using namespace std; //Класс для реализации комлексных чисел
class MComp{
    public:
    double Re;
    double Im;
};
//Переопределение оператора
MComp operator+(MComp x, MComp y){
    MComp z;
    z.Re=x.Re+y.Re;
    z.Im=x.Im+y.Im;
    return z;
    }
MComp operator-(MComp x, MComp y){
    MComp w;
    w.Re=x.Re-y.Re;
    w.Im=x.Im-y.Im;
    return w;
    }
MComp operator*(MComp x, MComp y){
    MComp t;
    t.Re=x.Re*y.Re;
    t.Im=x.Im*y.Im;
    return t;
    }
MComp operator/(MComp x, MComp y){
    MComp s;
    s.Re=x.Re/y.Re;
    s.Im=x.Im/y.Im;
    return s;
    }

int main(){
    MComp a,b,c,v,u,d;
    a.Re=2;
    a.Im=3;
    b.Re=2;
    b.Im=3;
    //операции над объектами
    c=a+b;
    v=a-b;
    u=a*b;
    d=a/b;
    setlocale(LC_ALL,"Russian");
    cout<<"a+b = c = c.Re+i*c.Im  , где c.Re="<<c.Re<<" и c.Im="<<c.Im<<"\n";
    cout<<"a-b = v = v.Re+i*v.Im  , где v.Re="<<v.Re<<" и v.Im="<<v.Im<<"\n";
    cout<<"a*b = u = u.Re+i*u.Im  , где u.Re="<<u.Re<<" и u.Im="<<u.Im<<"\n";
    cout<<"a/b = d = d.Re+i*d.Im  , где d.Re="<<d.Re<<" и d.Im="<<d.Im<<"\n";
    return 0;
}
