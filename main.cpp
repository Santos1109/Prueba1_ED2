#include <iostream>
#include "DataFile.h"
#include <string.h>
#include "Registro_1.h"
#include "Registro_2.h"
#include "Registro_3.h"
using namespace std;

int pos=0;


//Registro 1

Registro_1::Registro_1()
{
    this->nombre = new char();
    this->apellido = new char();
    this->direccion = new char();
    this->edad = -1;
    this->archivo = new DataFile();
}

void Registro_1::mostrar_registro()
{
    string nombre = "", apellido = "", direccion = "";
}

char * Registro_1::toChar()
{
    char caracter_separacion = '|';
    char caracter_de_fin = ';';
    int tamano_registro = this->tamano_registro();
    char *nuevo = new char[tamano_registro];
    int pos = 0;
    int tamano_nombre = strlen(this->nombre);
    memcpy(&nuevo[pos], this->nombre, tamano_nombre);
    pos += tamano_nombre;
    memcpy(&nuevo[pos], &caracter_separacion, 1);
    pos++;
    int tamano_apellido = strlen(this->apellido);
    memcpy(&nuevo[pos], this->apellido, tamano_apellido);
    pos += tamano_apellido;
    memcpy(&nuevo[pos], &caracter_separacion, 1);
    pos++;
    memcpy(&nuevo[pos], (char*)&this->edad, sizeof(int));
    pos += 4;
    memcpy(&nuevo[pos], &caracter_separacion, 1);
    pos++;
    int tamano_direccion = strlen(this->direccion);
    memcpy(&nuevo[pos], this->direccion, tamano_direccion);
    pos += tamano_direccion;
    memcpy(&nuevo[pos], &caracter_de_fin, 1);
    return nuevo;
}



/*
 * char* toChar(){
 *  int tam_registro=tamaño_registro();
 *  char* nuev=new char[tam_registro];
 *  int tam_nombre=strlen(nombre);
 *  int pos=0;
 *  memcoy(&nuevo[pos], nombre, tam_nombre);
 *  pos+=tam_nombre;
 *  memcpy(&nuevo[pos}, &caracter_separacion, 1);
 *  pos++;
 *  int tam_apellido=strlen(apellido);
 *  memcpy(&nuevo[pos], apellido, tamaño_apellido);
 *  pos+=tam_apellido;
 *  memcpy(&nuevo[pos], &caracter_separacion, 1);
 *  pos++;
 *  memcpy(&nuevo[pos], edad, sizeof(int));
 *  pos+=4;
 * }
 *
 *
 * */

void Registro_1::fromChar(char* nombre)
{
    Registro_1* registro1;
    ofstream out (nombre,ios::in);
    if(!out.is_open())
    {
        out.open(nombre);
    }
    out.seekp(tamano_registro()*pos);
    out.write(registro1->toChar(),94);

}

void Registro_1::abrir_archivo()
{

    ofstream out (nombre,ios::in);
    if(!out.is_open())
    {
        out.open(nombre);
    }

}

void Registro_1::leer_Archivo()
{
    Registro_1* registro1;
    char nombre[30];
    char apellido[30];
    int edad;
    char direccion[30];

    ifstream in (this->nombre);
    in.seekg(pos*tamano_registro());
    in.read(nombre,30);
    in.read(apellido,30);
    in.read((char*)&edad,4);
    in.read(direccion,30);

}

void Registro_1::cerrar_archivo()
{
    ofstream out (nombre);
    out.close();

}

int Registro_1::tamano_registro()
{
    return 0;
}


//Registro 2
Registro_2::Registro_2()
{
    this->nombre = new char[30];
    this->apellido = new char[30];
    this->direccion = new char[30];
    this->edad = -1;
    this->archivo = new DataFile();
}

void Registro_2::mostrar_registro()
{
    string nombre = "", apellido = "", direccion="";
}

char * Registro_2::toChar()
{
    char *nuevo = new char[94];
    for (int i = 0; i <30; i++)
    {
        nuevo[i] = this->nombre[i];
        nuevo[i+30] = this->apellido[i+30];
        nuevo[i+60] = this->direccion[i+60];
    }

    nuevo[90] = this->edad;
    return nuevo;
}

void Registro_2::fromChar(char * converter)
{
    for (int i = 0; i < 30; i++)
    {
        this->nombre[i] = converter[i];
        this->apellido[i+30] = converter[i+30];
        this->direccion[i+60] = converter[i+60];
    }

    this->edad = converter[90];
}

void Registro_2::abrir_archivo()
{
    string name;
    cout << "Ingrese nombre del archivo:" << endl;
    cin >> name;
    char *archivo;
    char nom[6];
    archivo = new char[strlen(name.c_str())];
    strcpy(archivo, name.c_str());

    this->archivo->abrir(archivo);
}

void Registro_2::leer_Archivo()
{
    Registro_2* registro2;
    char nombre[30];
    char apellido[30];
    int edad;
    char direccion[30];

    ifstream in (this->nombre);
    in.seekg(pos*tamano_registro());
    in.read(nombre,30);
    in.read(apellido,30);
    in.read((char*)&edad,4);
    in.read(direccion,30);
}

void Registro_2::cerrar_archivo()
{
    ofstream out (nombre);
    out.close();
}

int Registro_2::tamano_registro()
{
    return 94;
}


//Registro 3

Registro_3::Registro_3()
{
    this->nombre = new char();
    this->apellido = new char();
    this->direccion = new char();
    this->edad = -1;
    this->archivo = new DataFile();
}

void Registro_3::mostrar_registro()
{
    string nombre = "", apellido = "", direccion = "";
}

char * Registro_3::toChar()
{
    char caracter_separacion = '|';
    char caracter_de_fin = ';';
    int tamano_registro = this->tamano_registro();
    char *nuevo = new char[tamano_registro];
    int pos = 0;
    int tamano_nombre = strlen(this->nombre);
    memcpy(&nuevo[pos], this->nombre, tamano_nombre);
    pos += tamano_nombre;
    memcpy(&nuevo[pos], &caracter_separacion, 1);
    pos++;
    int tamano_apellido = strlen(this->apellido);
    memcpy(&nuevo[pos], this->apellido, tamano_apellido);
    pos += tamano_apellido;
    memcpy(&nuevo[pos], &caracter_separacion, 1);
    pos++;
    memcpy(&nuevo[pos], (char*)&this->edad, sizeof(int));
    pos += 4;
    memcpy(&nuevo[pos], &caracter_separacion, 1);
    pos++;
    int tamano_direccion = strlen(this->direccion);
    memcpy(&nuevo[pos], this->direccion, tamano_direccion);
    pos += tamano_direccion;
    memcpy(&nuevo[pos], &caracter_de_fin, 1);
    return nuevo;
}



void Registro_3::fromChar(char* nombre)
{
    Registro_1* registro1;
    ofstream out (nombre,ios::in);
    if(!out.is_open())
    {
        out.open(nombre);
    }
    out.seekp(tamano_registro()*pos);
    out.write(registro1->toChar(),94);

}

void Registro_3::abrir_archivo()
{

    ofstream out (nombre,ios::in);
    if(!out.is_open())
    {
        out.open(nombre);
    }

}

void Registro_3::leer_Archivo()
{
    Registro_1* registro1;
    char nombre[30];
    char apellido[30];
    int edad;
    char direccion[30];

    ifstream in (this->nombre);
    in.seekg(pos*tamano_registro());
    in.read(nombre,30);
    in.read(apellido,30);
    in.read((char*)&edad,4);
    in.read(direccion,30);

}

void Registro_3::cerrar_archivo()
{
    ofstream out (nombre);
    out.close();

}

int Registro_3::tamano_registro()
{
    return 94;
}


int main() {
    return 0;
}