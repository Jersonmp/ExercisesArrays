#ifndef MODIFICACIONES_H
#define MODIFICACIONES_H
#include<fstream>
#include<cstdlib>
#include<iostream>
#include<fstream>
#include <string>
#include<string.h>

class Modificaciones
{

	public:

		bool encontrado=false;
		int auxclave=0;
		char auxnombre[15];
		char* nequipo;
		int clave=0;
		char posicion[15],nombre[15],apellido[15],fechana[15], club[15];
		int peso=0, altura=0;
    public:
        Modificaciones(char* equipo):nequipo(equipo){}
        void editar(char nequipo[20]);
};

#endif // MODIFICACIONES_H
