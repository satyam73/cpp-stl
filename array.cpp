#include <iostream>
#include <array>

using namespace std;

int main()
{
  cout << "Arrays in stl"<< "\n";
  int normalArray[4] = {1, 2, 3, 4};

  //  printing normal array
  cout<<"Printing normal array >> ";
  for(int x: normalArray){
    cout<<x<< " ";
  }
  cout<<"\n";


  // array with stl
  cout<<"Printing array with stl >> ";
  array<int, 4> stlArray = {1, 2,3,4};
  for(int x: stlArray){
    cout<<x<<" ";
  }
  cout<<"\n";
  int size = stlArray.size();

  cout<<"size of stlArray is: "<<size<<"\n";
  cout<<"element at index 0: "<<stlArray.at(0)<<"\n";
  cout<<"first element: "<<stlArray.front()<<"\n";
  cout<<"last element: "<<stlArray.back()<<"\n";
  return 0;
}