#include <iostream>

using namespace std;

int main(){

int matriz[10][5];

for(int i=0;i<10;i++){
  for(int j=0;j<5;j++){
    if(((i+j)%2) == 0){
       matriz[i][j]=0;
    }
    else{
       matriz[i][j] = 1;
    }
  }
}

for(int i=0;i<10;i++){
  for(int j=0;j<5;j++){
     cout<<matriz[i][j];
     if (j!=4){
       cout<<" ";
     }
  }
  cout<<endl;
}

return 0;

}  
