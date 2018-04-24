#include<iostream>
using namespace std;

void InvertirArrayIt(int array[], const int cantidad){
	for(int i=0,j=(cantidad-1);i<cantidad/2	;i++,j--){
		int t;
		t=array[i];
		array[i]=array[j];
		array[j]=t;
		
		
	}
	for (int j=0;j<cantidad;j++){
		cout <<array[j]<<" ";
	}
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
	InvertirArrayIt(array, cantidad);
	cout<<endl;
	
	
	}
	
			
	
	
	


