#include <iostream>

using namespace std;

int main(){

float vet[10];

for(int i=0;i<10;i++){
vet[i]=i/2.0;
cout.precision(2);
cout<<fixed<<vet[i]<<endl;
}

return 0;

}


