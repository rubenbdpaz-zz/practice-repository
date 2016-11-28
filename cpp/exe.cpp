#include <iostream>
#include <list>

using namespace std;

  int main(){

  int n,m,a;
  cin>>n>>m;

  list<int> l1(n,0);
  list<int> l2(m,0);
  list<int>::iterator p;
  
  for(int i=0;i<n;i++) {
     cin>>a;
     l1.push_back(a);
  }

  for(int i=0;i<m;i++) {
     cin>>a;
     l2.push_back(a);
  }

  for(list<int>::iterator p = l2.begin(); p != l2.end(); p++) {
    l1.remove(*p);
  }

  for(list<int>::iterator p = l1.begin(); p != l1.end(); p++) {
    if(p != l1.begin())
      cout<<" ";
    cout<<*p;
  }

  return 0;

}
