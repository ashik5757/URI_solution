#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {

    int n,x;
    char ch;
    int t=0,c=0,r=0,s=0;

    cin >> n;

    for(int i=1;i<=n;i++) {

        cin >> x >> ch;

        t+=x;

        switch (ch) {

            case 'C':

             c+=x;

            break;

            case 'R':

             r+=x;

            break;

            case 'S':

             s+=x;

            break;

        }
        
    }


cout << "Total: " << t << " cobaias" << endl;
cout << "Total de coelhos: " << c << endl;
cout << "Total de ratos: " << r << endl;
cout << "Total de sapos: " << s << endl;
cout << "Percentual de coelhos: " << fixed << setprecision(2) << (c*100.00)/t << " %" << endl;
cout << "Percentual de ratos: " << fixed << setprecision(2) << (r*100.00)/t << " %" << endl;
cout << "Percentual de sapos: " << fixed << setprecision(2) << (s*100.00)/t << " %" << endl;


    system("pause");
    
    return 0;
}