//Programa - Aula 01 - Exercicio 04

#include <iostream>
#include <string>

int main(){
using namespace std;

int num,res,bin;

cin>>num;
if ((num>256)||(num<0))
	cout<<"Numero maior que 256. Execução encerrada.";
else{
	bin = (num%2);
	num/=2;
	do{
	bin = strcat(num%2,res);
	num/=2;
	}while(num!=0);
}

return 0;

}




