#include <iostream>

using namespace std;
 
int main() {

    string trash;

    int d1,d2;
    int h1,h2,m1,m2,s1,s2;
 
    cin >> trash >> d1;
    cin >> h1 >> trash >> m1 >> trash >> s1;
    cin >> trash >> d2;
    cin >> h2 >> trash >> m2 >> trash >> s2;

    int s = s2 - s1;
    int m = m2 - m1;
    int h = h2 - h1;
    int d = d2 - d1;

    if(s<0){

	    s+=60;
	    m--;
    }

    if(m<0){

	    m+=60;
	    h--;
    }

    if(h<0){
        
	    h+=24;
	    d--;
    }

   

  cout << d << " dia(s)" << endl;
  cout << h << " hora(s)" << endl;
  cout << m << " minuto(s)" << endl;
  cout << s << " segundo(s)" << endl;
  



    system("pause");
    
    return 0;
}