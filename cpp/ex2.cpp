//Programa - Aula 01 - Exercicio 02

#include <iostream>

int main(){
using namespace std;

	int n1,n2,n3,aux;

	cout<<"Entre com o primeiro numero: ";
	cin>>n1;
	cout<<"Entre com o segundo numero: ";
	cin>>n2;
	cout<<"Entre com o terceiro numero: ";
	cin>>n3;

	if(n1>n2){
	aux=n1;
	n1=n2;
	n2=aux;
	}

	if(n1>n3){
	aux=n1;
	n1=n3;
	n3=aux;
	}

	if(n2>n3){
	aux=n2;
	n2=n3;
	n3=aux;
	}

	cout<<n1<<endl;
	cout<<n2<<endl;
	cout<<n3<<endl;

	return 0;

}
