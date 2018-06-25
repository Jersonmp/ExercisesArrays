#include "Buscador.h"
#include<cstdlib>
#include<iostream>
#include<fstream>
#include <string>
#include<string.h>
using namespace std;
void Buscador::Buscar(char nequipo[20], char nombre[15]){
        ifstream lectura;
		strcat(nequipo, ".txt");
		lectura.open(nequipo, ios::out|ios::in);
		encontrado=false;
		if(lectura.is_open()){
			cout<<"Ingresa el Grupo que deseas buscar: ";
			lectura>>clave; //lectura adelantada

			while(!lectura.eof()){
				lectura>>posicion>>apellido>>nombre>>fechana>>altura>>peso>>club;
				//considerar que los enteros no comparamos igual que los chars
				if(strcmp(auxGrupo, nombre)==0){
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
					encontrado=true;
				}
				lectura>>clave;
			}
			if(encontrado==false){
				cout<<"No se encontró "<<auxGrupo<<endl;
			}
		}else{
			cout<<"No se puedo abrir el archivo"<<endl;
		}
		lectura.close();
	}
