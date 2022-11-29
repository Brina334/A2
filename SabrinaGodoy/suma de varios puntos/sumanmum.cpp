#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa 
{
    float SGC_x,SGC_s=0.0; // determinamos las variables que vamos a utilizar en este caso números con decimales.
    int SGC_i=0, SGC_l;  // determinamos las variables que vamos  a utilizar en este caso números enteros 
    cout<<"Ingrese el valor de SGC_l: ";  // determinamos al usuario que inicialice la variable 
    cin>>SGC_l;
    do{ // incio del bucle Do.
        cout<<"Ingrese el valor de SGC_x: ";  // determinamos al usuario que inicialice la variable 
        cin>>SGC_x;
        SGC_i=SGC_i+1; // Realizamos las respectivas operaciones para obtener nuestro resultado
        SGC_s=SGC_s+SGC_x;
    }while(SGC_i<SGC_l); // Condicional que hará que el bucle Do se repita la cantidad de veces que sean necesarias.
    // Imprimimos por consola el resultado de nuestras operaciones 
    cout <<"La suma de los numeros fue: "<<SGC_s<<endl;
    return 0;

}