#include<cstdlib>
#include<iostream>
#include<fstream>
#include <string>
#include<string.h>
#include "Modificaciones.h"
#include "Buscador.h"
using namespace std;



int main()
{
    cout << "NOmbre de equipo" << endl;

    char equipo[20], nombre[15];
    cin>>equipo;

    cout<<"Ingrese el nombre del jugador al que quisiera leer: "<<endl;
    cin>>nombre;

        //Modificaciones mo(equipo);
        Buscador Uno(equipo, nombre);
    //mo.editar(equipo);
    Uno.Buscar(equipo, nombre);
}
