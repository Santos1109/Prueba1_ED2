//
// Created by saint on 14/02/2018.
//
#include "DataFile.h"
using namespace std;

#ifndef PRUEBA1_REGISTRO_3_H
#define PRUEBA1_REGISTRO_3_H



class Registro_3
{
public:
    Registro_3();
    ~Registro_3();
    void mostrar_registro();
    char* toChar();
    void fromChar(char *);
    void abrir_archivo();
    void leer_Archivo();
    void cerrar_archivo();
    int tamano_registro();
private:
    DataFile* archivo;
    int tamano_nombre;
    char* nombre;
    int tamano_apellido;
    char* apellido;
    int edad;
    int tamano_Direccion;
    char *direccion;
};

#endif //PRUEBA1_REGISTRO_3_H
