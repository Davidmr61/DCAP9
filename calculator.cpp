#include <iostream>

using namespace std;

int main() {
    double num1, num2, resultado;
    char operador;
    
    cout << "Ingrese un operador (+, -, *, /): ";
    cin >> operador;

    cout << "Ingrese dos números: ";
    cin >> num1 >> num2;

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            cout << "Resultado: " << resultado << endl;
            break;

        case '-':
            resultado = num1 - num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case '*':
            resultado = num1 * num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "Resultado: " << resultado << endl;
            } else {
                cout << "No se puede dividir por cero." << endl;
            }
            break;
        default:
            cout << "Operador no válido." << endl;
            break;
    }

    return 0;
}