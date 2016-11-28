#include <iostream>

using namespace std;

double cubo (double);

int main(){

	double num;

	cin>>num;
	cout.precision(2);
	cout<<fixed<<cubo(num)<<endl;

	return 0;

}

double cubo (double x){

return (x*x*x);

}
