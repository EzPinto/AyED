#include <iostream>
using namespace std;

int main() {
    unsigned long long totalGranos = 1;
    unsigned long long granosCasillero = 1;
    int cas;

    for (cas = 2; cas < 65; ++cas) {
        granosCasillero *= 2;
        totalGranos += granosCasillero;
        cout << "Casillero " << cas << " con granos " << granosCasillero << " da un tablero con " << totalGranos << endl;
    }

    cout << "La cantidad total de granos de arroz es: " << totalGranos << endl;

    return 0;
}
