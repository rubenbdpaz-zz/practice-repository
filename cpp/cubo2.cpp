#include <iostream>

using namespace std;

void cubo (void);
double num;
int main(){

	

	cin>>num;
	cubo();
	cout.precision(2);
	cout<<fixed<<num<<endl;

	return 0;

}

void cubo (void){
num = num*num*num;

}
