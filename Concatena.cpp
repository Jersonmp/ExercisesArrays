#include<iostream>
using namespace std;
void Concatena(char cadena1[], char cadena2[]){
   int i, j;
   
   for (i = 0; cadena1[i] != '\0'; i++) ; 
    for (j = 0; (cadena1[i] = cadena2[j]) != '\0'; i++, j++);
   
   
}
int main(){
	char cadenaS[50];
	char cadenaT[25];
	cout<<"Inserta cadena S : ";
	cin>>cadenaS;
	cout<<"Inserta cadena T : ";
	cin>>cadenaT;
	Concatena(cadenaS, cadenaT);
	cout<<"Nueva Cadena S : "<<cadenaS<<endl;
}
