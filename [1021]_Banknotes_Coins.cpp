#include <iostream>
 
using namespace std;
 
int main() {
 
    double a;
    int t;
    int x;

    cin >> a;

    int b = (a - ((int)a))*100;

    cout << "NOTAS:" << endl;
    x=a/100;
    cout << x << " nota(s) de R$ 100.00" << endl;
    a=a-x*100;
    x=a/50;
    cout << x << " nota(s) de R$ 50.00" << endl;
    a=a-x*50;
    x=a/20;
    cout << x << " nota(s) de R$ 20.00" << endl;
    a=a-x*20;
    x=a/10;
    cout << x << " nota(s) de R$ 10.00" << endl;
    a=a-x*10;
    x=a/5;
    cout << x << " nota(s) de R$ 5.00" << endl;
    a=a-x*5;
    x=a/2;
    cout << x << " nota(s) de R$ 2.00" << endl;
    
    
   

    cout << "MOEDAS:" << endl;
    a=a-x*2;
    x=a/1;
    cout << x << " moeda(s) de R$ 1.00" << endl;
    x=b/50;
    cout << x << " moeda(s) de R$ 0.50" << endl;
    b=b-x*50;
    x=b/25;
    cout << x << " moeda(s) de R$ 0.25" << endl;
    b=b-x*25;
    x=b/10;
    cout << x << " moeda(s) de R$ 0.10" << endl;
    b=b-x*10;
    x=b/5;
    cout << x << " moeda(s) de R$ 0.05" << endl;
    b=b-x*5;
    x=b/1;
    cout << x << " moeda(s) de R$ 0.01" << endl;


    
    



    system("pause");
    
    return 0;
}