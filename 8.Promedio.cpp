//Mario Alberto Jimenez Jimenez
#include <iostream>
#include <conio.h>
using namespace std;

void solicitar_cal(int *, int);
float promedio(int *, int, int);
void compare_prom(int *, float , int);

int main(){
	int cals[5];
	solicitar_cal(cals, 0);
	float prom = promedio(cals, 0, 0);
	cout<<"El promedio es: "<<prom<<endl;
	compare_prom(cals, prom, 0);

	
	return 0;
}

void solicitar_cal(int *calif, int p){
	if(p==5){
		return;
	}else{
		cout<<"Ingrese una calificacion entera: "<<endl;
		cin>>*(calif+p);
		solicitar_cal(calif, p+1);
}
}

float promedio(int *calif, int p, int s){
	if(p==5){
		return s/5;
	}else{
		s = s + *(calif+p);
		promedio(calif, p+1, s);
	}
}

void compare_prom(int *calif, float prom, int p){
	if(*(calif+p)==NULL){
		return;
	}else{
		if(*(calif+p)<prom){
			cout<<"La calificacion: "<<*(calif+p)<<" es menor al promedio obtenido"<<endl;
			cout<<"La direccion de memoria es: "<<calif+p<<endl;
		}
	compare_prom(calif, prom, p+1);	
	}
}



