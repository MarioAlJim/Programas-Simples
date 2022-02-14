#include <iostream>
using namespace std;

int main(){
	int lista[10];
	cout<<"Escribe 10 numeros: "<<endl;
	for(int i=0;i<10;i++){
		cout<<"Numero: "<<i+1<<endl;
		cin>>lista[i];
	}
	for(int i=0;i<10;i++){
		if(*(lista+i)%2==0){
		cout<<"El numero "<<*(lista+i)<< " es par "<<endl;	
		cout<<"La direcccion de memoria es:"<<lista+i<<endl;
	}
	}
		return 0;
}