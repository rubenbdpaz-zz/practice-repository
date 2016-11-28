#include <iostream>
#include <list>

using namespace std;

int main(){
  int n;
  cin>>n;

  list<int>l1(n,2);
  int a = 1;

  for(list<int>::iterator p = l1.begin(); p != l1.end(); p++) {
  *p *= a;
  a = *p;
  }

  for(list<int>::iterator p = l1.begin(); p != l1.end(); p++) {
  cout << *p << endl;
  }

  return 0;

}
  
