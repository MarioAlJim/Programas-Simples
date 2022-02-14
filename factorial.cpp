#include <iostream>;
using namespace std;

int factorial(int n);
int main(){
	int num;
	cout<<"Ingresa un numero: "<<endl;
	cin>>num;
	if(num>0)
		cout<<"El factorial del numero es: "<<factorial(num);
	else 
		cout<<"El numero es a 0 o negativo: "<<endl;
		return 0; 
}

int factorial(int n){
	if(n==1){
	n = 1;	
	}
	else {
		n = n*factorial(n-1);
	}
	return n;
}