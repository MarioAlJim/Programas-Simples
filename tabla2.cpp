#include <iostream>;
using namespace std;

void tabla(int n, int m);

int main(){
	int num;
	cout<<"Ingresa un numero del 1 al 10: "<<endl;
	cin>>num;
	if(num>0 && num <11){
		cout<<"La tabla de multiplicar del numero es: "<<endl;
		tabla(num, 10);
		}
	else 
		cout<<"El numero es 0 o mayor a 10: "<<endl;
}
void tabla(int n, int m){
	if(m==0){
	return;
	}
	else{
		cout<<n<<"*"<<m<< " = "<<n*m<<endl;
		tabla(n,--m);
	}
}