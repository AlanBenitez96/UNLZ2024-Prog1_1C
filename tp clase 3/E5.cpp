#include <iostream>
using namespace std;

int main() {
    char caracter;

    
    cout << "Ingrese un carácter: ";
    cin >> caracter;

   
    if ((caracter >= 'a' && caracter <= 'z') || (caracter >= 'A' && caracter <= 'Z')) {
        
        caracter = tolower(caracter);
        
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            cout << "El carácter ingresado es una vocal." << endl;
        } else {
            cout << "El carácter ingresado es una consonante." << endl;
        }
    } else {
        cout << "El carácter ingresado no es una letra del alfabeto." << endl;
    }

    return 0;
}