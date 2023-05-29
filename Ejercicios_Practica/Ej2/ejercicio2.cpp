#include <iostream>
using namespace std;
#include <stdlib.h>

int main(int argc, char const *argv[])
{

/* Declaracion de variables*/
    int num;

/*Ingresar valores*/
   cout << "Ingrese un valor entre 1 y 7 : ";
   cin >> num;

/*El switch analiza el valor del numero e imprime el nombre del dia correspondiente.*/
    switch(num) {
        case 1:
            cout << "El numero ingresado corresponde al dia Lunes.\n";
            break;
        case 2:
            cout << "El numero ingresado corresponde al dia Martes \n";
            break;
        case 3:
            cout << "El numero ingresado corresponde al dia Miercoles \n";
            break;
        case 4:
            cout << "El numero ingresado corresponde al dia Jueves \n";
            break;
        case 5:
            cout << "El numero ingresado corresponde al dia Viernes \n";
            break;
        case 6:
            cout << "El numero ingresado corresponde al dia Sabado \n";
            break;
        case 7:
            cout << "El numero ingresado corresponde al dia Domingo\n";
            break;
        default:
            cout << "El numero ingresado no esta en el rango de 1 a 7.\n";
    }

    /*Esperar a tocar una tecla antes de cerrar el programa*/    
   system("pause");
   return 0;
}
