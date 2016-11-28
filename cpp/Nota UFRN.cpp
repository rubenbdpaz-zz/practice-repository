#include <iostream>
//#include <conio.h>

using namespace std;

int main()
{
    int q,i;
    float *n,*p,sn=0,sp=0,r=0;
    char c;

    do{

    cout << "Digite a quantidade de provas da disciplina \n";
    cin >> q;

    //system ("Cls");

    n = (float*)malloc(q * sizeof(float));
    p = (float*)malloc(q * sizeof(float));

    for (i=0;i<q;i++){
        cout << "Digite o "<< i+1 <<"o peso \n";
        cin >> p[i];
    }
    //system ("Cls");

    for (i=0;i<q;i++){
        cout << "Digite a "<< i+1 <<"a nota \n";
        cin >> n[i];
    }
    //system ("Cls");

    for (i=0;i<q;i++){
        sn = sn + (n[i]*p[i]);
        sp = sp + p[i];
    }

    r = sn/sp;

    if(r<3){
            cout << "Reprovado - Media = "<<r;
    }
    else if(r>=7){
         cout << "Aprovado - Media = "<<r;
    }
    else{
         cout << "Recuperacao - Media = "<<r<<"\n";

         n = (float*)realloc(n,q+1 * sizeof(float));

         cout << "Digite a nota da recuperacao\n";
         cin >> n[q+1];

         r = (r + n[q+1])/2;
           if(r<5){
                   cout << "Reprovado - Media = "<<r;
           }
           else{
                cout << "Aprovado - Media = "<<r;
           }
    }
    cout<<"\n";

    free(n);
    free(p);

    cout << "Para sair do programa, tecle s\n";
    c = getche();
    //system("cls");

}while(c != 's');


////system ("PAUSE");
return 0;

}
