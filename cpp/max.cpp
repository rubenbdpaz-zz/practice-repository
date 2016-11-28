#include <iostream>

using namespace std;

void max(double,double,double);

int main(){

double a,b,m=1;

cin>>a>>b;
max(a,b,m);

return 0;

}

void max(double a,double b, double m){

if(a>b){
  m = a;
}
else{
  m = b;
}
cout.precision(1);
cout<<fixed<<m<<endl;

}

 
