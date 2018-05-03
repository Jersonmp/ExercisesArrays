//Escriba una funcion que reciba como parámetro una cadena, el cual sera un
//numero en notación científica , por ejemplo "123.45e-6" y retorne el numero en si (sin la notacion cientifca)

#include<iostream>
using namespace std;

int convertirAscciNumEnt(char cadena[], int len){
	int numero=0;
	int con=1;
	int num;
	for (int i=len-1; i>=0;i--){
		num=cadena[i]-'0';
		numero=(num*con)+numero;
		con*=10;
	}
	return numero;
	
}

float convertirAscciNumDec(char cadena[], int len){
	float numero=0;
	float con=0.1;
	float num;
	for (int i=len-1; i>=0;i--){
		num=cadena[i]-'0';
		numero=(num*con)+numero;
		con/=10;
	}
	return numero;
	
}

int main(){
	cout<<"Elementos--> ";
	int len,a=0,b=0;
	cin>>len;
	char cadena1[len];
	char cadena2[len];
	char cadena3[len];
	for (int i=0;i<len;i++){ //genero cadena
		cin>>cadena1[i];
	}
	
	for(int j=0;j<len;j++){ //lee elementos de cadena
		if(cadena1[j]!='.'){
			cadena2[a]=cadena1[j];
			a+=1;}
	
		if(cadena1[j]=='.'){
			if(cadena1[j+1]!='e'){
			cadena3[b]=cadena1[j+1];
			b+=1;}
		}
	}
	cout<<convertirAscciNumEnt(cadena2, len)<<endl;
	cout<<convertirAscciNumDec(cadena3, len);
		
}


/*int main(){
char a[]={'9'};
int b=a[0]-'0';
cout <<b+25;
}*/
