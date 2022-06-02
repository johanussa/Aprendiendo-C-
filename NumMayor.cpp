// Leer 2 # enteros y determianar cual es el mayor

#include <iostream>
using namespace std;

int examNum(int num);

int main() {

    int num1 = 0, num2 = 0;

    cout << endl << "\t\t\t*** Bienvenido ***" << endl;
    cout << "\tPor favor ingrese un numero entero de 2 digitos: ";
    cin >> num1; cout << endl;
    num1 = examNum(num1);
    cout << "\tIngrese otro numero entero de 2 digitos: ";
    cin >> num2; cout << endl;
    num2 = examNum(num2);

    if (num1 > num2) { cout << "El numero " << num1 << " Es mayor que " << num2 << "\n"; }
    else {
        if (num2 > num1) { cout << "El numero " << num2 << " Es mayor que " << num1 << "\n"; }
        else { cout << "Los dos numeros " << num1 << " - " << num2 << " Son iguales \n"; }
    }

    return 0;
}
int examNum(int num) {

    int newNum = num;
    bool numOk = false;

    if ((num > 9 && num < 100) || (num < -9 && num > -100)) { return num; } 
    else {
        while (!numOk) {
            cout << "\tEl numero ingresado NO es valido \n";
            cout << "\tPor favor ingrese un numero entero de 2 digitos: ";
            cin >> newNum; cout << endl;
            if ((newNum > 9 && newNum < 100) || (newNum < -9 && newNum > -100)) { numOk = true; } 
        }
        return newNum;
    }
}