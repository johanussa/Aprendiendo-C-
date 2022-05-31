// Leer un # entero de 2 digitos y determinar si los dos digitos son iguales

#include <iostream>
using namespace std;

int main() {

    int num = 0, aux = 0, dg1, dg2;      // Variables para cada digito

    cout << endl << "\t\t\t*** Bienvenido ***" << endl;
    cout << "\tPor favor ingrese un numero entero de 2 digitos: ";
    cin >> num; cout << endl;

    if ((num > 9 && num < 100) || (num < -9 && num > -100)) {

        aux = num;
        if (num < 0) { num *= (-1); }
        dg1 = num / 10;
        dg2 = num - num / 10 * 10;

        if (dg1 == dg2) { cout << "Los 2 digitos del numero " << aux << " Son iguales \n"; }
        else { cout << "los digitos del numero " << aux << " No son iguales \n"; }

    } else {
        cout << "El numero Ingresado No es valido (2 digitos) \n";
    }

    return 0;
}