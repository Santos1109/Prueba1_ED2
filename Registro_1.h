//
// Created by saint on 13/02/2018.
//
#include "DataFile.h"
//#pragma once
#ifndef PRUEBA1_REGISTRO_1_H
#define PRUEBA1_REGISTRO_1_H

class Registro_1{

public:
    Registro_1();
    ~Registro_1();
    void mostrar_registro();

    void fromChar(char*);
    void abrir_archivo();
    void leer_Archivo();
    void cerrar_archivo();
    int tamano_registro();
    char* toChar();
    DataFile *archivo;
private:


    char* nombre;
    char* apellido;
    int edad;
    char* direccion;
};

#endif //PRUEBA1_REGISTRO_1_H
