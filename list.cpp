// implemented using doubly linked list

#include <iostream>
#include <list>

using namespace std;

int main(){
  cout<<"List in stl"<<endl;

  list<int> l;

  l.push_back(1);
  l.push_front(3);
  cout<<"size: "<<l.size()<<endl;
  for(int x: l){
    cout<<x<<" ";
  }cout<<endl;

  l.erase(l.begin());

  for(int x: l){
    cout<<x<<" ";
  }cout<<endl;

  cout<<"size: "<<l.size()<<endl;
  return 0;

}