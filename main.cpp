#include <iostream>

//#include "estudiante.h"
//#include "controlador.h"

#include "vista.h"

using namespace std;

int main()
{
    cout << "-- REGISTRO DE NOTAS --" << endl;
    /*Estudiante e1;
    cout << e1.toString();

    Controlador c;
    cout << c.visualizar();*/

    Vista *vista = new Vista();

    int opc;

    do{
        cout << "\nMENU PRINCIPAL\n";
        cout << "1. Mostrar datos" << endl;
        cout << "2. Actualizar nota" << endl;
        cout << "3. Ver estado" << endl;
        cout << "4. Salir" << endl;
        do{
            cout << "Ingrese su opción: ";
            cin >> opc;
        } while(opc < 1 || opc > 4);
        switch(opc){
        case 1:
            vista->imprimir();
            break;
        case 2:
            vista->actualizarNota();
            break;
        case 3:
            vista->verEstado();
            break;
        case 4:
            cout << "Bye bye" << endl;
        default:
            cout << "Opción no valida!" << endl;
        }
    } while(opc != 4);
    return 0;
}
