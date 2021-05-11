#include <iostream>

using namespace std;
 
int main() {

    string x("vertebrado");
    string y("invertebrado");
 
    string a("ave");
    string b("mamifero");
    string c("inseto");
    string d("anelideo");

    string p("carnivoro");
    string q("onivoro");
    string r("herbivoro");
    string s("hematofago");

    string l,m,n;

    cin >> l >> m >> n;

    if (x.compare(l)==0 && a.compare(m)==0 && p.compare(n)==0) {

        cout << "aguia" << endl;

    }

    else if (x.compare(l)==0 && a.compare(m)==0 && q.compare(n)==0) {

        cout << "pomba" << endl;

    }

    else if (x.compare(l)==0 && b.compare(m)==0 && q.compare(n)==0) {

        cout << "homem" << endl;

    }

    else if (x.compare(l)==0 && b.compare(m)==0 && r.compare(n)==0) {

        cout << "vaca" << endl;

    }

    else if (y.compare(l)==0 && c.compare(m)==0 && s.compare(n)==0) {

        cout << "pulga" << endl;

    }

    else if (y.compare(l)==0 && c.compare(m)==0 && r.compare(n)==0) {

        cout << "lagarta" << endl;

    }

    else if (y.compare(l)==0 && d.compare(m)==0 && s.compare(n)==0) {

        cout << "sanguessuga" << endl;

    }

    else if (y.compare(l)==0 && d.compare(m)==0 && q.compare(n)==0) {

        cout << "minhoca" << endl;

    }
    



    system("pause");
    
    return 0;
}