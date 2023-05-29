#include <iostream>
#include <cmath>
using namespace std;


int main() {
    double pi = 0.0;
    int signo = 1;
    int denominador = 1;

    for (int i = 0; ; i++) {
        double termino = signo * (1.0 / denominador);
        pi += termino;

        signo *= -1;
        denominador += 2;

        // Comprobar si el valor de pi coincide con los 6 primeros decimales
        if (static_cast<int>(pi * 1e6) == 3141592)
            break;
    }

    pi *= 4;

    cout.precision(7);
    cout << "Valor de pi: " << pi << std::endl;

    return 0;
}
