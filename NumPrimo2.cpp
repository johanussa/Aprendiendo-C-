// Leer un # entero de dos digitos y determinar si es primo y ademas si es negativo

#include <iostream>
using namespace std;

int main() {

    int num = 0, aux = 0, count = 0;
    cout << endl << "\t\t\t*** Bienvenido ***" << endl;
    cout << "\tPor favor ingrese un numero entero de 2 digitos: ";
    cin >> num; cout << endl;

    if ((num > 9 && num < 100) || (num < -9 && num > -100)) {

        aux = num;
        if (num < 0) { num *= (-1); }
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) { count ++; }
            if (count > 2) { cout << "\tEl numero " << aux << " No es # Primo \n"; break; }
        }
        if (count == 2) { cout << "\tEl numero " << aux << " Es # primo \n"; }
        if (aux < 0) { cout << "\tY es un # Negativo \n"; }
        
    } else {
        cout << "\tEl numero ingresado No es valido, Debe ser de 2 digitos, positivo o negativo \n";
    }

    return 0;
}