// Leer un numero entero y determinar si este termina en 4

#include <iostream>
using namespace std;

int main() {

    int num = 0, ud;

    cout << endl << "     *** Bienvenido ***   " << endl;
    cout << " Por favor ingrese un numero entero: ";
    cin >> num; cout << endl;

    ud = num - num / 10 * 10;

    if (ud == 4 || ud == -4) {
        cout << "El numero " << num << " Termina en 4, es Correcto !!" << endl;
    } else {
        cout << "El numero inresado NO termina en 4, sino en: " << ud << endl;
    }

    return 0;
}