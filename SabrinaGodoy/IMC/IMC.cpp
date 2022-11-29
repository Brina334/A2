#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
	float SGC_imc,SGC_peso,SGC_altura; // determinamos las variables que vamos a utilizar en este caso números con decimales.
	cout<<"Ingrese el peso (kg): ";cin>>SGC_peso; // determinamos al usuario que inicialice la variable de peso.
	cout<<"Ingrese la altura (metros): ";cin>>SGC_altura; // determinamos al usuario que inicialice la variable de altura.
	SGC_imc=SGC_peso/(SGC_altura*SGC_altura); // Realizamos el respectivo cálculo para obtener IMC.
	// a continuacion, depende del resultado que obtengamos en el IMC
	// repartimos diferentes resultados según las siguientes condiciones	
	if(SGC_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(SGC_imc>=18.5 && SGC_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(SGC_imc>=25 && SGC_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(SGC_imc>=27 && SGC_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(SGC_imc>=30 && SGC_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(SGC_imc>=35 && SGC_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(SGC_imc>=40 && SGC_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(SGC_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}