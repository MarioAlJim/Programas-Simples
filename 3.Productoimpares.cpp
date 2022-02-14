#include <iostream>;
using namespace std;

int multimpar(int n);
int main(){
	int num;
	cout<<"Ingrese un numero impar no mayor a 15: "<<endl;
	cin>>num;
	
	
	if(num<=0 || num>15){
		cout<<"Su numero es negativo o es mayor a 15"<<endl;	
	}
	else if(num%2>0){	
			cout<<"El producto de los numeros impares desde "<<num<<" hasta 1 es:"<<endl;
			cout<<multimpar(num);
		}
	else{
			cout<<"Su numero es par"<<endl;
		}	
	return 0;
} 
int multimpar(int n){
	if(n==1){
	n=1;
	}
	else{
		n = n*multimpar(n-2);
	}	
	return n;
}


