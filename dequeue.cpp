#include <iostream>
#include<deque>

using namespace std;
int main(){
  deque<int> myDeq;

  myDeq.push_back(2);
  myDeq.push_front(1);

  for(int x: myDeq){
    cout<<x<<" ";
  }cout<<endl;

  cout<<myDeq.size()<<endl;

  cout<<"front element: "<<myDeq.front()<<endl;
  cout<<"back element: "<<myDeq.back()<<endl;

  myDeq.erase(myDeq.begin(), myDeq.begin()+1);
  for(int x: myDeq){
    cout<<x<<" ";
  }cout<<endl;

  cout<<"is empty "<< myDeq.empty()<<endl;
  return 0;
}