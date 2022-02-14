#include<iostream>
	 using namespace std;
	 void ordenar1(int);
	 void ordenar2(int, int);
	 void imprime(int);
	 int vector[13]={23,4,59,1,26,9,85,10,16,20,49,68,29};
int main(){
	cout<<"Vector a ordenar: "; imprime(0);
	ordenar1(12);
	cout<<endl<<"Vector ordenado: " ; imprime(0);
	return 0;
}

void imprime(int pos){
	if(pos==13){
		return;
	}else{
		cout<<vector[pos]<<" ";
		imprime(++pos);
	}
}
void ordenar1(int n){
	if(n==0){
		return;
	}else{
		ordenar2(0,n);
	}
}
void ordenar2(int ini, int ter){
	if(ini == ter){
		ordenar1(ter-1);
	}else{
		if(vector[ini]>vector[ini+1]){
			int aux = vector[ini];
			vector[ini]=vector[ini+1];
			vector[ini+1]=aux;
			}
			ordenar2(ini+1, ter);
		}
}