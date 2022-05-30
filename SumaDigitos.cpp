// leer un numero entero de 2 digitos y y determinar la suma de sus digitos

#include <iostream>
using namespace std;

int main() {

    int num = 0, dig1, dig2;

    cout << endl << "     *** Bienvenido ***   " << endl;
    cout << " Por favor ingrese un numero entero de 2 digitos: ";
    cin >> num; cout << endl;

    if ((num > 9 && num < 100) || (num < -9 && num > -100)) {
        
        if (num < 0) { num *= (-1); }  // Si el # es negativo, lo volvemos positivo

        dig1 = num / 10;
        dig2 = num - num / 10 * 10;
        cout << "La suma de los digitos es: " << dig1 + dig2 << endl;

    } else {
        cout << "El digito no es valido" << endl;
        cout << "Debe ser un numero entre 10 y 99, positivo o negativo" << endl;
    }

    return 0;
}