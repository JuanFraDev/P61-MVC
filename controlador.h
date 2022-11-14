#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "estudiante.h"

class Controlador
{
private:
    Estudiante *modelo;
    float promedio();
public:
    Controlador();
    void actualizarNota(int nota, int valor);
    void agregarPuntos();
    string getEstado();
    string visualizar();
};

#endif // CONTROLADOR_H
