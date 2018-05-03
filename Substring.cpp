#include <iostream>

using namespace std;

bool substring(char *cadenas,char *cadenat,int *a,int *b)
{
    int i1=0,i2=0,e=0;
    while (i1<=*a){
	        if (cadenas[i1]==cadenat[i2]){
            	cadenat+=1;
            if (i2==*b)
                return true;
		    }
        i1++;
    }
    return false;
}

int main()
{
	
	char s[100];
    cout<<"Inserte la primera cadena : "<<endl;
    cin>>s;
	char t[100];
	cout<<"Inserte la segunda cadena : "<<endl;
	cin>>t;
    char *puntero=&s[0];
    char *puntero1=&t[0];
    int *s1,*t1;
    int tamanho1,tamanho2;
    tamanho1=sizeof(s)-1;
    tamanho2=sizeof(t)-1;
    s1=&tamanho1;
    t1=&tamanho2; 
    substring(puntero,puntero1,s1,t1);
    
}
