#ifndef BUSCADOR_H
#define BUSCADOR_H


class Buscador
{

	public:
		bool encontrado=false;
		int auxclave=0;
		char auxnombre[15];
		char* nequipo;
		int clave=0;
		char posicion[15],nombre[15],apellido[15],fechana[15], club[15];
		int peso=0, altura=0;
		char* auxGrupo;
		Buscador(char* equipo, char* nombre):nequipo(equipo),auxGrupo(nombre)
		{}
        void Buscar(char nequipo[20], char auxGrupo[15]);

};

#endif // BUSCADOR_H
