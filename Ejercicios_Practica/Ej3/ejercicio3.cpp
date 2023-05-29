#include <iostream>
using namespace std;
#include <stdlib.h>

int main(int argc, char const *argv[])
{
/*Variables*/
   int a, b, temp;

/*Ingresar varlo*/
   cout << "Ingrese un valor para a: ";
   cin >> a;
   cout << "Ingrese un valor para b: ";
   cin >> b;

/*Cambio de valores*/
temp = a;
a = b;
b = temp;

/*Impresion*/
   cout << "El valor de a es: " << a << endl;
   cout << "El valor de b es: " << b << endl;   
    
/*Esperar a tocar una tecla antes de cerrar el programa*/    
   system("pause");
   return 0;
}