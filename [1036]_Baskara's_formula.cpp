#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main() {

    
    double a,b,c;
    double r1,r2,x;

    cin >> a >> b >> c;

    x = (b*b)-4*a*c;
    r1 = (-b+sqrt(x))/(2*a);
    r2 = (-b-sqrt(x))/(2*a);


    if(a==0 || x<0) {

        cout << "Impossivel calcular" << endl;
    }


    else {

     cout << "R1 = " << fixed << setprecision(5) << r1 << endl;
     cout << "R2 = " << fixed << setprecision(5) << r2 << endl;

    }

   

    system("pause");
    
    return 0;
}