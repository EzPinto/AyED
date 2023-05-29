#include <iostream>
using namespace std;

int main() {
    int num;
    
    while (num != 0) {
        cout << "Ingrese un numero (0 para salir): ";
        cin >> num;
        cout << (num >= 0 ? "Es positivo" : "Es negativo") << endl;
    }
    return 0;
}
