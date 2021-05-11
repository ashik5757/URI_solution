#include <iostream>
 
using namespace std;
 
int main() {
 
    int a;
    int t;
    int x;

    cin >> a;

    cout << a << endl;

    x=a/100;
    cout << x << " nota(s) de R$ 100,00" << endl;
    a=a-x*100;
    x=a/50;
    cout << x << " nota(s) de R$ 50,00" << endl;
    a=a-x*50;
    x=a/20;
    cout << x << " nota(s) de R$ 20,00" << endl;
    a=a-x*20;
    x=a/10;
    cout << x << " nota(s) de R$ 10,00" << endl;
    a=a-x*10;
    x=a/5;
    cout << x << " nota(s) de R$ 5,00" << endl;
    a=a-x*5;
    x=a/2;
    cout << x << " nota(s) de R$ 2,00" << endl;
    a=a-x*2;
    x=a/1;
    cout << x << " nota(s) de R$ 1,00" << endl;

    system("pause");

    return 0;
}