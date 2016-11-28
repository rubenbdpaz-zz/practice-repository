#include <iostream>

using namespace std;

void ler_matriz(int n,int** L); 

int main()
{
    int n;
    
    cin >> n;
    
    int **L = (int**) malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
            L[i] = (int*) malloc(n*sizeof(int));
    
    //ler_matriz(n,L);
    
    cout << "digite a matriz\n";
    for(int i=0;i<n;i++){
       for (int j=0;j<n;i++){
           cin  >> L[i][j];
       }
     }
    

    
system ("PAUSE");
return 0;

}

void ler_matriz(int x,int** L){
     cout << "digite a matriz\n";
     for(int i=0;i<x;i++){
       for (int j=0;j<x;i++){
           cin  >> L[i][j];
       }
     }
}

