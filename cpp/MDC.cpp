#include <iostream>

using namespace std;

int main()
{
    int n1,n2,r=1;

    cin >> n1;
    cin >> n2;

    //Bloco para trocar os numeros caso o 1� numero ser menor que o 2�
    if(n2>n1){
              r=n1;
              n1=n2;
              n2=r;
              r=1;
    }
    //Fim do bloco


    while(r!=0){
                r = n1%n2;
                n1=n2;
                n2=r;
    }

    cout << "\n";cout <<"O MDC entre os dois numeros digitados sera "<< n1;
    cout << "\n";cout << "\n";
return 0;

}
