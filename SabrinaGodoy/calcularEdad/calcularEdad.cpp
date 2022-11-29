#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
    int SGC_aa, SGC_ma, SGC_da, SGC_an, SGC_mn, SGC_dn, SGC_a, SGC_m, SGC_d; // declaramos las variables que vamos a utilizar.. en este caso números enteros
    cout << "Ingrese la fecha actual Año-Mes-Dia :"; // enviamos un texto de salida que indique al usuario un formato a enviarnos
    cin >> SGC_aa >> SGC_ma >> SGC_da; // enviamos las variables de entrada de texto a través del teclado para recibir los datos que nos envíe el usuario
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : "; // enviamos texto de salida indicando al usuario formato a enviarnos.
    cin >> SGC_an >> SGC_mn >> SGC_dn;// enviamos las variables de entrada de texto a través del teclado para recibir los datos que nos envíe el usuario

    if (SGC_da > SGC_dn) // Condiciónal, verificamos si el día de la fecha de nacimiento es iguala al día actual
    {

        SGC_d = SGC_da - SGC_dn; // realizamos la respectiva operación para el cálculo
    }
    else // en caso de que no se cumpla la condición anterior nos saltamos y realizamos un cálculo alternativo.
    {
        // realizamos la respectiva operación para el cálculo
        SGC_da = SGC_da + 30;
        SGC_ma = SGC_ma - 1;
        SGC_d = SGC_da - SGC_dn;
    }
    // Condicional. verificamos si el Mes actual es mayor que el mes de nacimiento.
    if (SGC_ma > SGC_mn)
    {

        SGC_m = SGC_ma - SGC_mn; // realizamos la respectiva operación para el cálculo
    }
    else // en caso de que no se cumpla la condición anterior nos saltamos y realizamos un cálculo alternativo.
    {
         // realizamos la respectiva operación para el cálculo 
        SGC_ma = SGC_ma + 12;
        SGC_aa = SGC_aa - 1;
        SGC_m = SGC_ma - SGC_mn;
    }
    // Finalizamos con el cálculo usando la operación entre el año actual y el de nacimiento
    SGC_a = SGC_aa - SGC_an;
    // arrojamos el resultado de nuestra operación.
    cout << "Usted tiene " << SGC_a << " años, " << SGC_m << " meses," << SGC_d << " dias" << endl;
    return 0;
}