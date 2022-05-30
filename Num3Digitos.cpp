// Leer un numero entero y determinar si tiene 3 digitos

#include <iostream>
using namespace std;

int main() {

    int num = 0, cantDigi = 0, aux = 0;

    cout << endl << "     *** Bienvenido ***   " << endl;
    cout << " Por favor ingrese un numero entero: ";
    cin >> num; cout << endl; aux = num;

    while (num != 0) {
        num /= 10;
        cantDigi ++;    
    }    
    if (cantDigi == 3) {
        cout << "El numero " << aux << " Tiene: " << cantDigi << " Digitos, y es Valido" << endl;
    } else {
        cout << "El numero " << aux << " Tiene: " << cantDigi << " Digitos, No es Valido" << endl;
    }    

    return 0;
}