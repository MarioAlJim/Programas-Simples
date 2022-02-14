#include <iostream>;
using namespace std;

int tabla(int n);

int main(){
	int num;
	cout<<"Ingresa un numero del 1 al 10: "<<endl;
	cin>>num;
	if(num>0 && num <11)
		cout<<"La tabla de multiplicar del numero es: "<<tabla(num);
	else 
		cout<<"El numero es 0 o mayor a 10: "<<endl;
		return 0; 
}
int tabla(int n){
	int m = 10;
	for (int i=1;i<11;i++){
		cout<<n<<"*"<<m<< " = "<<n*m<<endl;
		m--;
	}
}