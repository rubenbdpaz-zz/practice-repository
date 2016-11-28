//Programa - Aula 01 - Exercicio 03

#include <iostream>

int main(){
using namespace std;

	int num,numi;

	cout<<"Entre com o numero a ser invertido: ";
	cin>>num;
	numi = (num%10);
	num/=10;

	do{
	numi*=10;
	numi+=(num%10);
	num/=10;
	}while(num!=0);

	cout<<numi<<endl;

	return 0;

}
