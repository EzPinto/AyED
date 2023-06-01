#include <iostream>
using namespace std;

double calcularPi() {
    double pi = 0.0;
    int signo = 1;
    int denominador = 1;

    while (true) {
        pi += signo * (1.0 / denominador);
        signo *= -1;
        denominador += 2;

        if (static_cast<int>(pi * 1e7) == 7853981)
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
