// Leer un numero entero y determinar si es negativo

#include <iostream>
using namespace std;

int main() {

    int num = 0;

    cout << endl << "     *** Bienvenido ***   " << endl;
    cout << " Por favor ingrese un numero entero: ";
    cin >> num; cout << endl;

    if (num < 0) {
        cout << num << " Es un numero Negativo !!" << endl;
    } else {
        if (num == 0) {
            cout << "El numero es neutral, o sea es CERO" << endl;
        } else {
            cout << num << " Es un numero Positivo" << endl;
        }
    }

    return 0;
}