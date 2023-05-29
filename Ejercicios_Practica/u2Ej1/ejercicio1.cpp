#include <iostream>
using namespace std;


bool esBisiesto(int anio) {
    return anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0);
 /*   if (anio % 4 != 0) {
        return false;
    } else if (anio % 100 != 0) {
        return true;
    } else if (anio % 400 != 0) {
        return false;
    } else {
        return true;
    }*/
}


int main() 
{

    cout << "Ingrese el anio a verificar:" << endl;
    int anio;
    cin >> anio;

    string condicion =esBisiesto(anio) ? " es bisiesto" : " no es bisiesto";
    cout << anio << condicion << endl;


/*if (esBisiesto(anio)) {
    cout << "El anio " << anio << " es bisisesto: " << "Verdadero" << endl;
} else {
    cout <<  "El anio " << anio << " es bisisesto: " << "Falso" << endl;
}*/
return 0;
}