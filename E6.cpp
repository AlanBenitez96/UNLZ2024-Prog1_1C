#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char operacion;

    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Seleccione la operación a realizar (+, -, *, /): ";
    cin >> operacion;

    switch (operacion) {
        case '+':
            cout << "El resultado de la suma es: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "El resultado de la resta es: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "El resultado de la multiplicación es: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "El resultado de la división es: " << num1 / num2 << endl;
            } else {
                cout << "No se puede dividir entre cero." << endl;
            }
            break;
        default:
            cout << "Operación inválida. Por favor seleccione una operación válida." << endl;
    }

    return 0;
}