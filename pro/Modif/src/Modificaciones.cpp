#include "Modificaciones.h"
#include<cstdlib>
#include<iostream>
#include<fstream>
#include <string>
#include<string.h>
using namespace std;

    void Modificaciones::editar(char nequipo[20]){
    ofstream aux; //para escribir en un archivo auxiliar y luego pasarlo
	ifstream lectura;
    strcat(nequipo, ".txt");
	aux.open("auxiliar.txt",ios::out);
	lectura.open(nequipo, ios::in);
	if(aux.is_open() && lectura.is_open()){
		cout<<"Ingresa el numero de camiseta que quieres modificar: ";
		cin>>auxclave;
		lectura>>clave;
		while(!lectura.eof()){
			lectura>>posicion>>apellido>>nombre>>fechana>>altura>>peso>>club;
			if(auxclave==clave){
				encontrado=true;
				cout<<"----------------------------"<<endl;
				cout<<"Dorsal: "<<clave<<endl;
				cout<<"Posicion: "<<posicion<<endl;
				cout<<"Apellido: "<<apellido<<endl;
				cout<<"Nombre: "<<nombre<<endl;
				cout<<"F. nacimiento: "<<fechana<<endl;
				cout<<"Altura: "<<altura<<endl;
				cout<<"Peso: "<<peso<<endl;
				cout<<"Club: "<<club<<endl;
				cout<<"----------------------------"<<endl;
				cout<<"Ingresa el nuevo nombre "<<endl;
				cin>>auxnombre;
				aux<<clave<<"\t"<<posicion<<"   "<<apellido<<"\t"<<auxnombre<<"\t"<<fechana<<"\t"<<altura<<"\t"<<peso<<"\t"<<club<<endl;
				cout<<"Registro modificado"<<endl;
			}else{
				aux<<clave<<"\t"<<posicion<<"   "<<apellido<<"\t"<<nombre<<"\t"<<fechana<<"\t"<<altura<<"\t"<<peso<<"\t"<<club<<endl;
			}
			lectura>>clave;
		}

	}else{
			cout<<"No se puedo abrir el archivo"<<endl;
	}
	if(encontrado==false){
		cout<<"No se encontro un registro con ese numero de dorsal "<<endl;
	}
	aux.close();
	lectura.close();
	remove(nequipo);
    rename("auxiliar.txt",nequipo);


};


/*Modificaciones::~Modificaciones()
{
    //dtor
}
*/
