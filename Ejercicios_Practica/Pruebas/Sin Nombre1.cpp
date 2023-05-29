#include <iostream>
using namespace std;

int calcularDiaDeLaSemana(int dia, int mes, int anio); 

int main(int argc, char** argv) {
int anio;
int mes;
int dia;
int diaDeLaSemana;

cout << "Ingresar dia" << endl;
cin >> dia;
cout << "Ingresar mes" << endl;
cin >> mes;
cout << "Ingresar anio" << endl;
cin >> anio;

diaDeLaSemana = calcularDiaDeLaSemana(dia, mes,anio);

cout <<  "El dia de la semana es: ";
switch(diaDeLaSemana)
{
    case 0:
        cout << "Domingo" << endl;
        break;
    case 1:
        cout << "Lunes" << endl;
        break;
    case 2:
        cout << "Martes" << endl;
        break;
    case 3:
        cout << "Miercoles" << endl;
        break;
    case 4:
        cout << "Jueves" << endl;
        break;
    case 5:
        cout << "Viernes" << endl;
        break;
    case 6:
        cout << "Sabado" << endl;
        break;
    default:
    	break;
}
	return 0;
}

int calcularDiaDeLaSemana(int dia, int mes, int anio){
int regular[]={0,3,3,6,1,4,6,2,5,0,3,5};
int bisiesto[]={0,3,4,0,2,5,0,3,6,1,4,6};

int result1,result2,result3,result4,result5,x,d;

if(anio%400==0 || (anio%4==0 && anio%100!=0)) {
    x=bisiesto[mes-1];
} else {
    x=regular[mes-1];
}

result1=(anio-1)%7;
result2=(anio-1)/4;
result3=(3*(((anio-1)/100)+1))/4;
result4=(result2-result3)%7;
result5=dia%7;
d=(result1+result4+x+result5)%7;

return d;

}

