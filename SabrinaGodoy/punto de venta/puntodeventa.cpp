#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
    float SGC_x, SGC_s = 0, SGC_vb, SGC_piva = 12, SGC_viva, SGC_pdesc = 10, SGC_vdesc, SGC_vn;  // determinamos las variables que vamos a utilizar en este caso números con decimales.
    int SGC_i = 0, SGC_l; // determinamos las variables que vamos a utilizar en este caso números enteros 
    cout << "Ingrese l: "; // determinamos al usuario que inicialice la variable 
    cin >> SGC_l; // Le regresamos la variable ingresada al usuario la cual es la que ingresó en este caso.
    do // inicio del ciclo do.
    {
        cout << "Ingrese x: "; // determinamos al usuario que inicialice la variable 
        cin >> SGC_x;  // Le regresamos la variable ingresada al usuario la cual es la que ingresó en este caso.
        SGC_i = SGC_i + 1;  // Inicio de los cálculos dependiendo de la condicional del do.
        SGC_s = SGC_s + SGC_x;
    } while (SGC_i < SGC_l); // Condición que hará que este bucle se repita la cantidad de veces que se haya establecido.
    SGC_vb = SGC_s; // Realizamos las  operaciones adicionales para obtener un resultado.
    SGC_viva = SGC_vb * SGC_piva / 100;
    SGC_vdesc = SGC_vb * SGC_pdesc / 100;
    SGC_vn = SGC_vb + SGC_viva - SGC_vdesc;
    // Imprimimos al usuario el resultado de las operaciones correspondientes.
    cout << "El valor a pagar es de: " << SGC_vn << endl;
    return 0;
}