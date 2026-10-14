//Escribe la siguiente expresión como expresión en C++: (a+(b/c))/(d+(e/f))
#include <iostream>
using namespace std;

float a,b,c,d,e,f,ope;

int main (){
    cout << "Ingrese el valor de a:" << endl;
    cin >> a;

    cout << "Ingrese el valor de b: "<< endl;
    cin>> b;

    cout << "Ingrese el valor de c: "<< endl;
    cin>> c;

    cout << "Ingrese el valor de d: "<< endl;
    cin>> d;

    cout << "Ingrese el valor de e: "<< endl;
    cin>> e;

    cout << "Ingrese el valor de f: "<< endl;
    cin>> f;

    ope = (a+(b/c))/(d+(e/f));
    cout << "El resultado es: " << ope << endl;
}