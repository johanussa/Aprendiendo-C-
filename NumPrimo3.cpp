// Leer un # entero de 2 digitos y determinar si sus dos digitos son primos

#include <iostream>
using namespace std;

void numPrimo(int digito);

int main() {

    int num = 0, dg1, dg2;
    cout << endl << "\t\t\t*** Bienvenido ***" << endl;
    cout << "\tPor favor ingrese un numero entero de 2 digitos: ";
    cin >> num; cout << endl;

    if ((num > 9 && num < 100) || (num < -9 && num > -100)) {

        dg1 = num / 10;
        numPrimo(dg1);
        dg2 = num - num / 10 * 10;
        numPrimo(dg2);

    } else {
        cout << "\tEl numero ingresado No es valido, Debe ser de 2 digitos, positivo o negativo \n";
    }

    return 0;
}
void numPrimo(int digito) {

    int cont = 0;
    if (digito < 0) { digito *= (-1); }
    for (int i = 1; i <= digito; i++) {
        if (digito % i == 0) { cont ++; }
        if (cont > 2) { cout << "El digito " << digito << " No es # Primo \n"; break; }
    }
    if (cont == 2) { cout << "El digito " << digito << " Si es # Primo \n"; }
}