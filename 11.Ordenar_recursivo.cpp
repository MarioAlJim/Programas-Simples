#include<iostream>
#include "Pila.h"
	 using namespace std;
	 
int main(int args, char* argv[]){
	int opc, ini=0, g;
	Pila p;
		cout <<endl<<"[1] inicializar pila" <<endl;
		cout <<"[2] ingresar pila" <<endl;
		cout <<"[3] sacar dato" <<endl;
		cout <<"[4] mostrar cima" <<endl;
		cout <<"[5] vaciar pila" <<endl;
		cout <<"[6] salir" <<endl;
	do{
		cin>>opc;
		
		switch (opc){
			case 1:
				if (ini == 0){
					p.Inicializar();
					ini=1;
					cout<<"Pila inicializada"<<endl;
				}
				else
					cout<<"Pila ya inicializada"<<endl;
				break;
			case 2:
				if(ini == 1){
				cout<<"Escriba el numero que quiere guardar: ";
				cin>>g;
				if(p.Push(g)==0)
					cout<<endl<<"Elemento guardado"<<endl;
				else
					cout<<"No es posible agregar mas registros, la pila esta llena"<<endl;
				}
				else
				cout<<"Pila no inicializada"<<endl;
				break;
			case 3:
				if(ini == 1){
					if (p.Pop()==0){
							
					}
					else{
						cout<<" Pila vacia"<<endl;	
					}
					
				}
				else
					cout<<"Pila no inicializada"<<endl;
				
				break;
			case 4:
				if(ini == 1){
				cout<<"La cima es: "<<p.Cima()<<endl;
				}
				else
					cout<<"Pila no inicializada"<<endl;
				break;
			case 5:
				if(ini == 1){
					p.LimpiarPila();
					cout<<"Pila limpia";
				}
				else
					cout<<"Pila no inicializada"<<endl;
				break;
			default:
				cout<<"Adios "<<endl;
				break;
		}
		
	}while (opc != 6);
	
	return 0;	
}