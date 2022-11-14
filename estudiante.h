#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>

using namespace std;

class Estudiante
{
private:
    string nombre;
    int nota1;
    int nota2;
    int nota3;
public:
    Estudiante();
    Estudiante(const string &nombre, int nota1, int nota2, int nota3);
    const string &getNombre() const;
    void setNombre(const string &newNombre);
    int getNota1() const;
    void setNota1(int newNota1);
    int getNota2() const;
    void setNota2(int newNota2);
    int getNota3() const;
    void setNota3(int newNota3);
    string toString();
};

#endif // ESTUDIANTE_H
