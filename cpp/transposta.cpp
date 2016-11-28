#include <iostream>

using namespace std;

void tr (int[5][5]);

void escrever (int[5][5]);

int i,j,a,b,matriz[5][5],matrizt[5][5];

int main(){

cin>>a>>b;

for(i=0;i<a;i++){
  for(j=0;j<b;j++){
    cin>>matriz[i][j];
  }
}

tr(matriz);

escrever(matrizt);

return 0;

}

void tr (int matriz[5][5]){
for(i=0;i<a;i++){
  for(j=0;j<b;j++){
    matrizt[i][j] = matriz[j][i];
  }
}

}

void escrever (int matrizt[5][5]){
for(i=0;i<a;i++){
  for(j=0;j<b;j++){
    cout<<matrizt[i][j];
    if(j!=(b-1)){
       cout<<" ";
    }
  }
  cout<<endl;
}

}

