#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
	float SGC_x,SGC_s=0; // determinamos las variables que vamos a utilizar en este caso números con decimales.
	int SGC_i=0,SGC_l; // determinamos las variables que vamos  a utilizar en este caso números enteros 
	cout<<"Ingrese cantidad de egresos  ";cin>>SGC_l; // determinamos al usuario que inicialice la variable 
	cout<<"Ingrese saldo inicial : ";cin>>SGC_s; // determinamos al usuario que inicialice la variable 
	
	do{ // inicio del ciclo Do.
	cout<<"Ingrese egreso(x): ";cin>>SGC_x; // determinamos al usuario que inicialice la variable 
	SGC_i=SGC_i+1; //  Realizamos las respectivas operaciones..
	SGC_s=SGC_s-SGC_x;

	}while(SGC_i<SGC_l); // Condicional que hará que el do se repita en bucle la cantidad de veces que sea necesaria.
	// Imprimimos en consola al usuario el resultado de las operaciones respectivas.
	cout<<"El saldo final es: "<<SGC_s<<endl;
	return 0;
}