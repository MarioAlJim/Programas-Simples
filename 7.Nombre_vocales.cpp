//Mario Alberto Jimenez Jimenez
#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int vocal=0;
void obten_vocales(char *, int);

int main(){
	char nombre[30];
	cout<<"Ingrese su nombre completo: "<<endl;
	gets(nombre);
	obten_vocales(nombre, 0);	
	cout<<"El numero de vocales en su nombre es: "<<vocal;
	return 0;
}

void obten_vocales(char *nom, int p){
	if(p==30){ return; }
	else{
	switch(*(nom+p)){
    case 'a':
    case 'e':
    case 'i': 
    case 'o': 
    case 'u': 
    case 'A':
    case 'E':
    case 'I': 
    case 'O': 
    case 'U': 
   		vocal++;
    break;
    }    	    
	obten_vocales(nom, p+1);
	}
}
