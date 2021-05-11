#include <iostream>

using namespace std;
 
int main() {

    int x,y,temp,sum=0;

    cin >> x >> y;

    if (x>y) {
 
        temp=x;
        x=y;
        y=temp;
    }

    for (int i=x+1;i<y;i++) {

        if (i%2!=0) {
            sum+=i;
        }

    }

    cout << sum << endl;
 
    system("pause");
    
    return 0;
}