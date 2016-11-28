#include <iostream>

using namespace std;

void altera (int[5], int, int);

int main(){

int i,x,vet[5];

for(i=0;i<5;i++){
cin>>vet[i];
	}
cin>>i>>x;

altera(vet,i,x);

for(i=0;i<5;i++){
cout<<vet[i]<<endl;
	}

return 0;

}

void altera(int vet[5], int i, int x){

vet[i] = x;

}



