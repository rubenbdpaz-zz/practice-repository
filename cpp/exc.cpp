#include <iostream>
#include <list>

using namespace std;

int main(){
  int n,cont=0;
  cin>>n;
  
  list<int>l1;
  list<int>l2;
  list<int>::iterator p;

  for(int i=1;i<=n;i++){
  l1.push_back(i);
  l2.push_front(i);
  }

  for(list<int>::iterator p = l1.begin(); p != l1.end(); p++) {
  cout<<*p<<", ";
  }

  for(list<int>::iterator p = l2.begin(); p != l2.end(); p++) {
    cout<<*p;
    cont++;
    if(cont<n)
       cout<<", ";
    
  }

  return 0;

}
