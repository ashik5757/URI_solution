#include <iostream>

using namespace std;
 
int main() {

    int a,temp=0,max,rem;



    for(int i=1;i<=100;i++) {

        cin >> a;

        if (a>temp) {

            max=a;
            rem=i;
        }
        
        temp=max;
        
    }

    cout << max << endl;
    cout << rem << endl;
    
    system("pause");
    
    return 0;
}