// Leer un # entero de dos digitos y determinar si ambos digitos son pares

#include <iostream>
using namespace std;

int main() {

    int num = 0, dg1, dg2;

    cout << endl << "     *** Bienvenido ***   " << endl;
    cout << " Por favor ingrese un numero entero de 2 digitos: ";
    cin >> num; cout << endl;

    if ((num > 9 && num < 100) || (num < -9 && num > -100)) {

        dg1 = num / 10;
        dg2 = num - num / 10 * 10;

        if (dg1 % 2 == 0 && dg2 % 2 == 0) { cout << "Sus dos digitos son numeros pares \n"; } 
        else {
            if (dg1 % 2 == 0) { cout << "Solo el primer digito es # par \n"; }
            else {
                if (dg2 % 2 == 0) { cout << "Solo el segundo digito es # par \n"; }
                else { cout << "Ninguno de los dos digitos es # par \n"; }
            }
        }
    } else {
        cout << "El numero ingresado No es valido, debe ser de dos digitos \n";
    }

    return 0;
}