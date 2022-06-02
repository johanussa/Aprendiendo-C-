// Leer dos # enteros de 2 digitos y determinar si tienen digitos comunes

#include <iostream>
using namespace std;

int examNum(int num);
void numComun(int num1, int num2);

int main() {

    int num1 = 0, num2 = 0;

    cout << endl << "\t\t\t*** Bienvenido *** \n";
    cout << "\tPor favor ingrese un numero entero de 2 digitos: ";
    cin >> num1;
    num1 = examNum(num1);
    cout << "\tIngrese otro numero entero de 2 digitos: ";
    cin >> num2; cout << endl;
    num2 = examNum(num2);

    numComun(num1, num2);
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
void numComun(int num1, int num2) {

    int dg1, dg2, dg3, dg4;
    bool comunOk = false;

    cout << "< -------------------------------------------------------- >\n\n";
    cout << "\t >>>> Digitos en común entre: " << num1 << " y " << num2 << endl;

    if (num1 < 0) { num1 *= (-1); }
    if (num2 < 0) { num2 *= (-1); }

    dg1 = num1 / 10;
    dg2 = num1 - num1 / 10 * 10;
    dg3 = num2 / 10;
    dg4 = num2 - num2 / 10 * 10; 

    if (dg1 == dg3) { cout << "\n - Comparten el digito: " << dg1; comunOk = true; }
    if (dg1 == dg4) { cout << "\n - Comparten el digito: " << dg1; comunOk = true; }
    if (dg2 == dg3) { cout << "\n - Comparten el digito: " << dg2; comunOk = true; }
    if (dg2 == dg4) { cout << "\n - Comparten el digito: " << dg2; comunOk = true; }
    if (!comunOk) { cout << "\n -- No Tienen ningun digito en comun \n"; } cout << endl;    

    return;
}