#include<iostream>
using namespace std; 
class MComp{
    public:
    double Re;
};
//Переопределение оператора
MComp operator+(MComp x, MComp y){
    MComp z;
    z.Re=x.Re+y.Re;
    return z;
    }
MComp operator-(MComp x, MComp y){
    MComp w;
    w.Re=x.Re-y.Re;
    return w;
    }
MComp operator*(MComp x, MComp y){
    MComp t;
    t.Re=x.Re*y.Re;
    return t;
    }
MComp operator/(MComp x, MComp y){
    MComp s;
    s.Re=x.Re/y.Re;
    return s;
    }

int main(){
    MComp a,b,c,v,u,d;
    a.Re=2.3;
    b.Re=2.3;

    //операции над объектами
    c=a+b;
    v=a-b;
    u=a*b;
    d=a/b;
    cout<<"a+b = c = "<<c.Re<<"\n";
    cout<<"a-b = v = "<<v.Re<<"\n";
    cout<<"a*b = u = "<<u.Re<<"\n";
    cout<<"a/b = d = "<<d.Re<<"\n";
    return 0;
}
