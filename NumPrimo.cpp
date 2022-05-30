// leer un # entero de dos digitos menor que 20, y determinar si es # primo

#include <iostream>
using namespace std;

int main() {

    int num = 0, cont = 0, aux = 0;
    
    cout << endl << "     *** Bienvenido ***   " << endl;
    cout << " Por favor ingrese un numero entero de 2 digitos menor a 20: ";
    cin >> num; cout << endl;

    if ((num > 9 && num < 20) || (num < -9 && num > -100)) {

        aux = num;
        if (num < 0) { num *= (-1); }
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) { cont ++; }
            if (cont > 2) { cout << "El numero " << aux << " No es # Primo \n"; break; }
        }
        if (cont == 2) { cout << "El numero " << aux << " Es un # Primo !! \n"; }
        
    } else {
        cout << "El numero ingresado No es valido, Debe ser menor a 20 y de 2 digitos \n";
    }

    return 0;
}