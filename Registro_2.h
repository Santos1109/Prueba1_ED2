//
// Created by saint on 13/02/2018.
//
#include "DataFile.h"

#ifndef PRUEBA1_REGISTRO_2_H
#define PRUEBA1_REGISTRO_2_H

class Registro_2{
public:
    Registro_2();
    void mostrar_registro();
    char* toChar();
    void fromChar(char *);
    void abrir_archivo();
    void leer_Archivo();
    void cerrar_archivo();
    int tamano_registro();
private:
    DataFile * archivo;
    char *nombre;//30
    char* apellido;//30
    int edad;
    char* direccion;//30
};

#endif //PRUEBA1_REGISTRO_2_

