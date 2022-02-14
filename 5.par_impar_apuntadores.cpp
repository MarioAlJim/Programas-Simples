#include <iostream>
using namespace std;

int main(){
	int num;
	int *dir_num;
	dir_num=&num;
	cout<<"Escribe un numero: "<<endl;
	cin>>num;
	
	if(*dir_num%2==0){
		cout<<"Su numero es par "<<*dir_num<<endl;	
		cout<<"La direcccion de memoria es:"<<dir_num<<endl;
	}else{
		cout<<"Su numero es impar " <<*dir_num<<endl;	
		cout<<"La direcccion de memoria es:"<<dir_num<<endl;
	}
	
	
}