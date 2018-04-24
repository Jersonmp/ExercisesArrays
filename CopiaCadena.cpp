#include<iostream>
using namespace std;

int CopiaCadena(char cadena1[], char cadena2[]){
for(int j=0;j!= '\n';j++){
		cadena1[j]=cadena2[j];	
}
}
int main(){
	char cadenaS[50];
	char cadenaT[25];
	cout<<"Inserta cadena S : ";
	cin>>cadenaS;
	cout<<"Inserta cadena T : ";
	cin>>cadenaT;
	cout<<"Cadena S : "<<cadenaS<<endl;
	CopiaCadena(cadenaS, cadenaT);
	cout<<"Nueva Cadena S : "<<cadenaS<<endl;
}
