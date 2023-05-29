#include <iostream>
using namespace std;

int main()
{
    /*Varuables*/
    int num1, num2, num3;


    /*Ingresar valores enteros*/
    cout << "Ingrese 3 valores enteros a continuacion:" << endl;
    cin >> num1 >> num2 >> num3;
    cout << "Usted ingreso: \nValor 1 = " << num1 << "\n" << "Valor 2 = " << num2 << "\n" << "Valor 3 = " << num3 << endl; 

    /*Ejecutar*/

    if ( num1 < num2)
    {
        if (num2 < num3)
        {
            cout << "Los valores ordenados de menor a mayor: \nValor menor:" << num1 << " - " << num2 << " - " << num3 << " - " << " Valor mayor"<< endl;
        
        } else if (num1 < num3)
        {
            cout << "Los valores ordenados de menor a mayor: \nValor menor:" << num1 << " - " << num3 << " - " << num2 << " - " << " Valor mayor"<< endl;
        } else {
            cout << "Los valores ordenados de menor a mayor: \nValor menor:" << num3 << " - " << num1 << " - " << num2 << " - " << " Valor mayor"<< endl;
        }
        
        } else { if (num1 < num3)
        {
            cout << "Los valores ordenados de menor a mayor: \nValor menor:" << num2 << " - " << num1 << " - " << num3 << " - " << " Valor mayor"<< endl;
        
        } else if (num2 < num3)
        {
            cout << "Los valores ordenados de menor a mayor: \nValor menor:" << num2 << " - " << num3 << " - " << num1 << " - " << " Valor mayor"<< endl;
        } else {
            cout << "Los valores ordenados de menor a mayor: \nValor menor:" << num3 << " - " << num2 << " - " << num1 << " - " << " Valor mayor"<< endl;
        }
    }
    return 0;
}
