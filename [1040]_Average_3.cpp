#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {


    double a,b,c,d,x;
    double avg,avgn;

    cin >> a >> b >> c >> d;

    avg = ((2*a)+(3*b)+(4*c)+d)/10.0;

    cout << "Media: " << fixed << setprecision(1) << avg << endl;

    if(avg>=7.0) {

        cout << "Aluno aprovado." << endl;
    }

    else if(avg<5.0) {

        cout << "Aluno reprovado." << endl;
    }  
 
    else if(avg>=5.0 || avg <=6.9) {

        cout << "Aluno em exame." << endl;
        
        cin >> x;
        cout << "Nota do exame: " << fixed << setprecision(1) << x << endl;

        avgn = (avg+x)/2;


        if(avgn>=5.0) {

        cout << "Aluno aprovado." << endl;

         }

        else if(avgn<=4.9) {

        cout << "Aluno reprovado." << endl;
        
         }

         cout << "Media final: " << fixed << setprecision(1) << avgn << endl;


    }




    system("pause");
    
    return 0;
}