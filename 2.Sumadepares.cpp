#include <iostream>;
using namespace std;

int sumapares(int n);

int main(){
	int num;
	cout<<"Ingrese un numero par: "<<endl;
	cin>>num;
	
	if(num % 2==0){
		cout<<"La suma de los numeros pares de "<<num<<" hasta 0 es: "<<endl;
		cout<<sumapares(num);
	}
	else{
		cout<<"Su numero no es par: "<<num<<endl;
	}
	return 0;
} 
int sumapares(int n){
	if(n==0){
		return n;
	}
	else{
		n = n + sumapares(n-2);
	}
		return n;
}