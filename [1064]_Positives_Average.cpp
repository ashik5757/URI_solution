#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {

    double x;
    double sum = 0, avg; 
    int count = 0;
    

    for (int i=1;i<=6;i++) {

        cin >> x;

        if (x>0) {

            sum+=x;
            count++;
        }
    }

    avg = sum/count;

    cout << count << " valores positivos" << endl;
    cout << fixed << setprecision(1) << avg << endl;

    system("pause");
    
    return 0;
}