#include "vista.h"

Vista::Vista()
{
    controlador = new Controlador();
}

void Vista::actualizarNota()
{
    int nota = 0, ind = 0, opc = 0;

    cout << "\n-- MENU DE ACTUALIZACION --\n" << endl;
    cout << "1. Agregar 2 puntos a la nota mas baja" << endl;
    cout << "2. Modificar una nota" << endl;
    do{
        cout << "Su seleccion: ";
        cin >> opc;
    } while (opc < 1 || opc > 2);
    switch (opc){
    case 1:
        controlador->agregarPuntos();
        cout << "\nSe han agregado los puntos!\n";
        break;
    case 2:
        do{
            cout << "Ingrese la nota que desea actualizar: ";
            cin >> ind;
        } while(ind < 1 || ind > 3);
        do{
            cout << "Ingrese la nueva nota " << ind << ": ";
            cin >> nota;
        }while(nota < 0 || nota > 10);
        controlador->actualizarNota(ind,nota);
        cout << "\nNota " << ind << " actualizada!" << endl;
        break;
    }
}

void Vista::verEstado()
{
    cout << "Estado: " << controlador->getEstado() << endl;
}

void Vista::imprimir()
{
    cout << controlador->visualizar();
}
