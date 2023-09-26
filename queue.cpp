#include <iostream>
#include <queue>

using namespace std;

int main()
{
  cout << "Queue in STL" << endl;

  queue<int> q;
  q.push(1);
  q.push(5);
  q.push(3);

  cout << "front element: " << q.front() << endl;
  cout << "back element: " << q.back() << endl;

  q.pop();

  cout << "front element: " << q.front() << endl;

  cout << "front element: " << q.front() << endl;

  q.emplace(10);

  cout << "front element: " << q.front() << endl;

  return 0;
}