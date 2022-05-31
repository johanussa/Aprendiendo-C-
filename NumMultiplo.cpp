// leer un # entero de 2 digitos y determinar si un digito es multiplo del otro

#include <iostream>
using namespace std;

int main() {

    int num = 0, dg1, dg2;
    bool multi = false;

    cout << endl << "\t\t\t*** Bienvenido ***" << endl;
    cout << "\tPor favor ingrese un numero entero de 2 digitos: ";
    cin >> num; cout << endl;

    if ((num > 9 && num < 100) || (num < -9 && num > -100)) {

        dg1 = num / 10;
        dg2 = num - num / 10 * 10;
        
        if (dg2 != 0 && dg1 % dg2 == 0) { cout << dg2 << " Es multiplo de " << dg1 << endl; multi = true; }
        if (dg2 % dg1 == 0) { cout << dg1 << " Es multiplo de " << dg2 << endl; multi = true; }
        if (!multi) { cout << "Ninguno de los digitos es multiplo del uno al otro \n"; }               

    } else {
        cout << "El numero Ingresado No es valido (2 digitos) \n";
    }

    return 0;
}