//Escribe la siguiente expresión como expresión en C++: (a+b)/(c+d)

#include <iostream>
using namespace std;

float a,b,c,d,ope;

int main (){
    cout << "Ingrese el valor de a:" << endl;
    cin >> a;

    cout << "Ingrese el valor de b: "<< endl;
    cin>> b;

    cout << "Ingrese el valor de c: "<< endl;
    cin>> c;

    cout << "Ingrese el valor de d: "<< endl;
    cin>> d;

    ope = (a+b)/(c+d);
    cout << "El resultado es: " << ope << endl;
}