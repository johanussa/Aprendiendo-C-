// Leer 3 # enteros y determinar cual de ellos es mayor

#include <iostream>
using namespace std;

int main() {

    int num1, num2, num3;

    cout << "\n\t\t\t*** Bienvenido *** \n";
    cout << "1. Digite un numero: "; cin >> num1;
    cout << "2. Digite un numero: "; cin >> num2;
    cout << "3. Digite un numero: "; cin >> num3;

    if (num1 > num2 && num1 > num3) { cout << "\n\tEl numero mayor es: " << num1 << endl; return 0; }
    if (num2 > num1 && num2 > num3) { cout << "\n\tEl numero mayor es: " << num2 << endl; return 0; }
    if (num3 > num2 && num3 > num1) { cout << "\n\tEl numero mayor es: " << num3 << endl; return 0; }

    if (num1 == num2 && num1 == num3) { cout << "\nTodos los # son iguales \n"; }
    else {
        if (num1 == num2) { cout << "\n Los numeros 1 y 2 Son iguales\n"; } 
        else {
            if (num1 == num3) { cout << "\n Los numeros 1 y 3 Son iguales\n"; }
            else { cout << "\n Los numeros 2 y 3 Son iguales\n";; }
        }
    }

    return 0;
}