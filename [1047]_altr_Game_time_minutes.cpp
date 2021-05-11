#include <iostream>

using namespace std;
 
int main() {

    int h1,m1,h2,m2;
 
    cin >> h1 >> m1 >> h2 >> m2;

    int h = h2-h1;
    int m = m2-m1;

    if (m<0) {

        m+=60;
        h--;

    }

    if (h<0) {

        h+=24;
    }

     cout << "O JOGO DUROU " << h << " HORA(S)" << " E " << m << " MINUTO(S)" << endl;
           


    system("pause");
    
    return 0;
}