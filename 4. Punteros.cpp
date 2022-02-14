#include <iostream>
using namespace std;

int main(){
	int num;
	int *dir_num;
	dir_num=&num;
	num = 10;
	cout<<"Numero:"<<*dir_num<<endl;
	cout<<"Direccion de memoria: "<<&dir_num;
	return 0;
}