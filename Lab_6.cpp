#include<iostream>
using namespace std;
int t = 0;
struct r {
    r *p1;
    r *p2;
    int n;
};
r *k(int N) {
    r *p;
    p = new r;
    t++;
    p->n = t;
    if (N > 1) {
        p->p1 = k(N - 1);
        p->p2 = k(N - 1);
    }
    return p;
}
int main() {
    r *p;
    p = k(4);
    //cout << t << endl;
    //cout << p << endl;
    //cout <<"p->p2 = " << p->p2 << endl;
    //cout <<"p->p1 = " << p->p1 << endl;
    cout <<"p->p1->n = " << p->p1->n << endl;
    cout << "p->p1->p2->n = " << p->p1->p2->n << endl;
    cout << "p->p2->n = " << p->p2->n << endl;
    cout << "p->p2->p1->n = " << p->p2->p1->n << endl;

    system("pause");
    return 0;
}
