#include <iostream>

using namespace std;
 
int main() {

    int m,n,i=0,j,k;
    int a[100],b[100];
    


    cin >> m >> n; 


    while (m>0 && n>0) {

    
      a[i] = max(m,n);
      b[i] = min(m,n);

      i++;
      

      cin >> m >> n; 

    }


    for (j=0;j<i;j++) {

        int s=0;

        for(k=b[j];k<=a[j];k++) {

            cout << k << " ";
            s+=k;
        }

        cout << "Sum=" << s << endl;



    }



   

    system("pause");
    
    return 0;
}