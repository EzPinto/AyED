#include <iostream>

using namespace std;

int main() {
    /*Declaracion de variables y constantes*/
    const int base {10};
    unsigned long long int num;

    /*Ingresar valor*/
    cout << "Ingrese un numero entero: ";
    cin >> num;

    unsigned long long int cifras = 0;
    unsigned long long int n = num;

    /*Procesamiento del dato*/
    do{ 
        n /= base;
        ++cifras;
    } while (n != 0);

    cout << "El numero " << num << " tiene " << cifras << " cifras." << endl;

    return 0;
}
