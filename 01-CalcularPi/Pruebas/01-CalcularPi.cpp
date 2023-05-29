#include <iostream>
using namespace std;

double calcularPi() {
    double pi = 0.0;
    int signo = 1;
    int denominador = 1;
    int iteracionesMaximas = 1000000; // Número máximo de iteraciones

    for (int i = 0; i < iteracionesMaximas; i++) {
        pi += signo * (1.0 / denominador);
        signo *= -1;
        denominador += 2;

        // Comprobar si el valor de pi coincide con los 6 primeros decimales
        if (static_cast<int>(pi * 1e6) == 3141592)
            break;
    }

    return pi * 4;
}

int main() {
    double pi = calcularPi();
    cout.precision(7);
    cout << "Valor de pi: " << pi << endl;

    return 0;
}

