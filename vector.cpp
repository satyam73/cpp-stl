// vector is a dynamic array, whenever it gets filled, it doubles it's size by making a new vector of double of it's size(of the filled vector) and copy all the elements into that vector

#include <iostream>
#include <vector>

using namespace std;

int main (){
  cout<<"Vectors in STL"<<"\n";

  vector<int> myVector;
  vector<int> anotherVector(5, 2);
  vector<int> copiedFromAnotherVector(anotherVector);
  for(auto i : anotherVector){
    cout<<i<<" ";
  }cout<<"\n";

 for(auto i : copiedFromAnotherVector){
    cout<<i<<" ";
  }cout<<"\n";

  //capacity - no. of elements it can store
  //size - no. of elements it currently have
  cout<<"Capacity of myVector: "<<myVector.capacity()<<"\n";  //0

  myVector.push_back(1);

  cout<<"Capacity of myVector: "<<myVector.capacity()<<"\n";  //1

  myVector.push_back(2);

  cout<<"Capacity of myVector: "<<myVector.capacity()<<"\n"; //2 //doubles here

  myVector.push_back(3);

  cout<<"Capacity of myVector: "<<myVector.capacity()<<"\n"; //4 - doubles here

  myVector.push_back(4);

  cout<<"Capacity of myVector: "<<myVector.capacity()<<"\n"; //4 - not doubling because already has capacity of 4

  myVector.push_back(5);

  cout<<"Capacity of myVector: "<<myVector.capacity()<<"\n"; //8 - doubles here

  cout<<"Element at 2nd index: "<<myVector.at(2)<<"\n";

  cout<<"front element: "<<myVector.front()<<"\n";

  cout<<"back element: "<<myVector.back()<<"\n";

  cout<<"before pop :"<<myVector.back()<<"\n";
  myVector.pop_back();
  cout<<"after pop: "<<myVector.back()<<"\n";

  /* clear in vector makes size = zero but not capacity*/
  //capacity remains same
 
  cout<<"before clear: size = "<<myVector.size()<<" capacity "<<myVector.capacity()<<"\n";
  myVector.clear();
  cout<<"after clear: size = "<<myVector.size()<<" capacity "<<myVector.capacity()<<"\n";
  return 0;
}