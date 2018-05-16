#include<iostream>
using namespace std;

int SumarArrayIt(int array[], int cantidad){
	int contador=0;
	for (int i=0;i<cantidad;i++){
		contador+=array[i];
	}
	return contador;
	
}

int SumarArrayRe(int array[], int cantidad){
	if (cantidad==1){
		return array[0];
	}
	else
		return array[cantidad-1]+SumarArrayIt(array,cantidad-1);
}

int main(){
	cout<<"Ingrese cantidad de elementos en la cadena --> "<<endl;
	int cantidad;
	cin>>cantidad;
	int num=1;
	int array[cantidad];
	for(int i=0; i<cantidad;i++){
		cout<<"Valor "<<num++<<"--> ";
		cin>>array[i];
	}
	cout << SumarArrayIt(array, cantidad)<<endl;
	cout << SumarArrayRe(array, cantidad);
	
	
}
