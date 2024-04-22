#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int añoNacimiento, edad;
    
    time_t now = time(0);
    tm* tiempo = localtime(&now);
    int añoActual = 1900 + tiempo->tm_year;

    cout << "Ingrese el año de nacimiento: ";
    cin >> añoNacimiento;

    edad = añoActual - añoNacimiento;

    if (edad >= 18) {
        cout << "La persona es mayor de edad" << endl;
    } else {
        cout << "La persona es menor de edad" << endl;
    }

    return 0;
}