#include <iostream>

using namespace std;
 
int main() {

    int i,n,x;
    int c=0,o=0;

    cin >> n;

    for (i=1;i<=n;i++) {

        cin >> x;

        if (x>=10 && x <=20) {
            c++;
        }

        else {
            o++;
        }

    }

    cout << c << " in" << endl;
    cout << o << " out" << endl;


    
    system("pause");
    
    return 0;
}