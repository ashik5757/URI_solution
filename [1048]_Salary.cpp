#include <iostream>
#include <iomanip>


using namespace std;
 
int main() {

    double s,a,x;
    int p;

    cin >> s;


    if (s>=0 && s<=400) {

        a = (s*15)/100;
        x = s + a;
        p = 15;

    }

    else if (s>400 && s<=800) {

        a = (s*12)/100;
        x = s + a;
        p = 12;

    }

    else if (s>800 && s<=1200) {

        a = (s*10)/100;
        x = s + a;
        p = 10;

    }

    else if (s>1200 && s<=2000) {

        a = (s*7)/100;
        x = s + a;
        p = 7;

    }

    else if (s>2000) {

        a = (s*4)/100;
        x = s + a;
        p = 4;

    }

    cout << "Novo salario: " << fixed << setprecision(2) << x << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << a << endl;
    cout << "Em percentual: " << p << " %" << endl;

    

    
    


    system("pause");
    
    return 0;
}