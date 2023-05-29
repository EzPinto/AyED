#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Ingrese un numero (0 para salir): ";
    cin >> num;
        
    while (num != 0) {
        if (num != 0) {
            cout << (num > 0 ? "Es positivo" : "Es negativo") << endl;
        }
        cout << "Ingrese un numero (0 para salir): ";
        cin >> num;
        
    }
    return 0;
}
