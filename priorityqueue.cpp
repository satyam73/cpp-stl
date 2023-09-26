/* (max)default priority queue --> max heap --> highest element on top*/
/* min priority queue --> min heap --> smallest element on top*/
#include <iostream>
#include <queue>

using namespace std;
int main()
{
  // way to make priority queue based on max heap
  priority_queue<int> maxi;
  // way to make priority queue based on min heap
  priority_queue<int, vector<int>, greater<int>> mini;

  maxi.push(1);
  maxi.push(4);
  maxi.push(3);
  maxi.push(2);

  int n = maxi.size();
  for (int i = 0; i < n; i++)
  {
    cout << maxi.top() << " ";
    maxi.pop();
  } // 4 3 2 1
  cout << endl;

  mini.push(10);
  mini.push(4);
  mini.push(2);
  mini.push(7);

  int miniSize = mini.size();
  for (int i = 0; i < miniSize; i++)
  {
    cout << mini.top() << " ";
    mini.pop();
  } // 2 4 7 10
  cout << endl;
  cout << "is empty :" << maxi.empty() << endl;
}