#include <iostream>
using namespace std;

int main() {
    int año;

    cout << "Ingrese un año: ";
    cin >> año;

    if ((año % 4 == 0 && año % 100 != 0) || año % 400 == 0) {
        cout << año << " es un año bisiesto." << endl;
    } else {
        cout << año << " no es un año bisiesto." << endl;
    }

    return 0;
}