#include <iostream>


using namespace std;
 
int main() {

    int a,b,c,d,x,y;

    cin >> a >> c >> b >> d;
 
    if (a>b && c>d) {

        x = (24-a)+b-1;
        y = 60-c+d;

    }

    else if (a>b && c<d) {

        x = (24-a)+b-1;
        y = d-c;

    }


    else if (a==b && c==d) {

        x = 24;
        y = 0;
    }

    else if (a==b && c<d) {

        x = 0;
        y = d-c;
    }

    else if (a==b && c>d) {

        x = 23;
        y = 60-c+d;
    }

    else if (a<b && c<d) {

        x = b-a;
        y = d-c;
    }

    else if (a<b && c>d) {

        x = b-a-1;
        y = 60-c+d;
    }



    cout << "O JOGO DUROU " << x << " HORA(S)" << " E " << y << " MINUTO(S)" << endl;


    system("pause");
    
    return 0;
}