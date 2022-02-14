//Mario Alberto Jimenez Jimenez
#include <iostream>
#include <stdlib.h>
using namespace std;

void llenar_arreglo(int *, int, int);
void comprobar_arreglo(int *, int , int *, int, int);
void imprimir_negativos(int *, int, int);
int *arreglo, *neg, size, n=0;
	
int main(){
	cout<<"Ingrese la cantidad de numeros que quiere agregar: "<<endl;
	cin>>size;
	arreglo = new int[size];
	llenar_arreglo(arreglo, size, 0);
	
	delete[] arreglo;
	delete[] neg;
	return 0;
}

void llenar_arreglo(int *arreglo, int s, int p){
	if(p==s){
	neg =  new int[n];
	comprobar_arreglo(arreglo, size, neg, 0, 0);
	return;
	}else{
		cout<<"Ingrese un numero positivo o negativo: "<<endl;
		cin>>*(arreglo+p);
			if(*(arreglo+p)<0){
				n= n+1;
			}
	}
	llenar_arreglo(arreglo, s, p+1);

}

void comprobar_arreglo(int *arreglo, int s, int *negativos, int p, int c){
	if(p==s){
	cout<<"Los numeros negativos con sus direcciones son: "<<endl;
	imprimir_negativos(neg, n, 0);
	return;
	}else{
		if(*(arreglo+p)<0){
			*(negativos+c) = *(arreglo+p);
			c= c+1;
		}
	}
	comprobar_arreglo(arreglo, s, negativos, p+1, c);
}

void imprimir_negativos(int *negativos, int n, int p){
	if(p==n){
	return;
	}else{
		cout<<negativos+p<< " -> "<< *(negativos+p)<<endl;
	}
	imprimir_negativos(negativos, n, p+1);
}

