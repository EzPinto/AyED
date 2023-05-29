#include <iostream>
using namespace std;

int main()
{
/*Declaracion de Variables*/
   int l1, l2, l3;

/*Ingresar valores*/
   cout << "Ingrese el valor de los Lados del triangulo en cm: " << endl;


/*Ingresa Lado 1 mayor que cero*/
   do
   {
    cout << "Lado 1: " << endl;
   cin >> l1;
   } while (l1 <= 0);

/*Ingresa Lado 2 mayor que cero*/
do {
    cout << "Lado 2: " << endl;
    cin >> l2;
   } while (l2 <= 0);

/*Ingresa Lado 3 mayor que cero*/
    do
   {
    cout << "Lado 3: " << endl;
   cin >> l3;
   } while (l3 <= 0);
      

   cout << "Usted ingreso, Lado 1 = " << l1 << "cm, Lado 2 = " << l2 << "cm, Lado 3 = " << l3 << "cm." << endl;

/*Impresion*/
   if (l1 == l2 && l2 == l3)
   {
    cout << "El triangulo es equilatero." << endl;
   } else if (l1 == l2 || l1 == l3 || l2 == l3)
   {
    cout << "El triangulo es isosceles." << endl;
   } else {
    cout << "El triangulo es escaleno." << endl;
   }


/*Esperar a tocar una tecla antes de cerrar el programa*/    
   system("pause");
   return 0;
}