#include <iostream>
using namespace std;

int main()
{
/*Declaracion de Variables*/
   int bultos, cajas;

/*Ingresar valores*/
   cout << "Ingrese la cantidad de bultos: ";
   cin >> bultos;
   cout << "Ingrese la cantidad de bultos que entran en cada cajas: ";
   cin >> cajas;

/*Impresion*/
   int llenas = cajas > 0 ? bultos / cajas: 0;
   int resto = cajas > 0 ?  bultos % cajas: bultos; 

    cout << "Tiene " << llenas << " cajas completas." << endl;
    cout << "Le sobraron " << resto << " bultos." << endl;
/*Esperar a tocar una tecla antes de cerrar el programa*/    
   system("pause");
   return 0;
}
