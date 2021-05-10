#include <iostream>


using namespace std;
 
int main() {

    double a,b,c;
    double p,q,r;

    cin >> p >> q >> r;

    if(p>q && p>r) {

        a = p;
        b = q;
        c = r;
    } 

    else if(q>p && q>r) {

        a = q;
        b = p;
        c = r;
    } 

    else {

        a = r;
        b = p;
        c = q;

    }



    double x = a*a;
    double y = (b*b)+(c*c);

    if (a>=(b+c)) {
        cout << "NAO FORMA TRIANGULO" << endl;
    }

    else {

    if (x==y) {
        cout << "TRIANGULO RETANGULO" << endl;
    }

    if (x>y) {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }

    if (x<y) {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }

    if (a==b && b==c) {
        cout << "TRIANGULO EQUILATERO" << endl;
    }

    if (((a==b) && c!=a) || ((b==c) && a!=b) || ((a==c) && b!=a) ) {
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    }

    system("pause");
    
    return 0;
}