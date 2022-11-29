#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
	float SGC_x,SGC_s=0,SGC_s1=0,SGC_s5=0; // declaramos las variables que vamos a utilizar con decimales
	int SGC_i=0,SGC_l,SGC_i1=0,SGC_i5=0; // declaramos las variables que vamos a utilizar únicamente enteras.
	cout<<"Ingrese l: ";cin>>SGC_l; // declaramos la variable que en este caso será determinada por el usuario
	do{ // ingresamos a un ciclo do

	cout<<"Ingrese x: ";cin>>SGC_x; // determinamos al usuario que ingrese la variable de x
	SGC_i=SGC_i+1; // hacemos los respectivos cálculos
	SGC_s=SGC_s+SGC_x;
	if(SGC_x==1){ // Condicional dependiente del cálculo anterior
		SGC_i1=SGC_i1+1;
		SGC_s1=SGC_s1+SGC_x;
	}else{ // si la condición anterior no se cumple a partir del cálculo anterior, se hará un cálculo alternativo.

		SGC_i5=SGC_i5+1;
		SGC_s5=SGC_s5+SGC_x;
	}

	}while(SGC_i<SGC_l); // Ciclo Do, se repetirá siempre y cuando i sea mayor a l
	// a continuación arrojamos al usuario los resultados de nuestras operaciones.
	cout<<"La cantidad de monedas es: "<<SGC_i<<endl;
	cout<<"El valor es: "<<SGC_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<SGC_i1<<endl;
	cout<<"El valor es: "<<SGC_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<SGC_i5<<endl;
	cout<<"La cantidad de moneda es: "<<SGC_s5<<endl;
	return 0;
}