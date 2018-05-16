#include<iostream>
using namespace std;
int TamanhoCadena(const char cadena[]){
	int j=0;
	while(cadena[j]!='\0'){
		j+=1;
	}
	return j;
	
}

int main(){
	cout<<"Ingrese cadena --> ";
	char cadena[52];
	cin>>cadena;
	cout<<TamanhoCadena(cadena);
	
}
