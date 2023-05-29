#include <iostream>
using namespace std;
#include <stdlib.h>

int main(int argc, char const *argv[])
{
/*Variables*/
   const float mmxpul = 25.4;
   float num;

/*Ingresar valor*/
   cout << "Ingrese un valor en mm: ";
   cin >> num;

/*Conversion de mm a pulgadas*/
  float pul = num / mmxpul;

/*Impresion*/
   cout << "Se ingreso el numero : " << num << "mm" << endl;
   cout << "Su valor en pulgadas es: " << pul  << "\"" << endl;   
    
/*Esperar a tocar una tecla antes de cerrar el programa*/    
   system("pause");
   return 0;
}
