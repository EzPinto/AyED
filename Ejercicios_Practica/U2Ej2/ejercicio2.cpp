#include <iostream>
using namespace std;



int formatoAAAAMMDD(int dia, int mes, int anio) {
    int fecha = anio * 10000 + mes * 100 + dia;
    return fecha;
}



int main() 
{
    cout << "Ingrese el dia, el mes y el anio" << endl;
    int dia, mes, anio;
    cout << "Dia: ";
    cin >> dia;
    cout << "Mes: ";
    cin >> mes;
    cout << "Anio: ";
    cin >> anio;


int fecha = formatoAAAAMMDD(dia, mes, anio);
cout << "Fecha en formato AAAAMMDD: " << fecha << endl;

cout << "Una fecha como dia/mes/anio: ";
char sep;
cin >> dia >> sep >> mes >> sep >> anio;
fecha = formatoAAAAMMDD(dia, mes, anio);
cout << "Fecha: " << fecha << endl;

return 0;
}