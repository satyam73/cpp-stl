// implementation using BST
//  unique elements - can't modify
// returns in sorted order
// set is slower then unordered set
// unordered set - returns in random order(not sorted)

#include <iostream>
#include <set>

// insert / find / erase / count - time complexity O(log n)
using namespace std;
int main()
{
  set<int> s;

  s.insert(5); // time complexity O(log n)
  s.insert(5);
  s.insert(2);
  s.insert(4);
  s.insert(7);

  for (int x : s)
  {
    cout << x << " ";
  }
  cout << endl;

  set<int>::iterator it = s.begin();
  it++;

  s.erase(it);

  for (int x : s)
  {
    cout << x << " ";
  }
  cout << endl;

  cout << "is 7 present or not: " << s.count(7) << endl;
  cout << "is 100 present or not: " << s.count(100) << endl;

  set<int>::iterator itr = s.find(2); // return reference iterator for the element

  cout << "itr value is : " << *itr << endl;

  // can also loop through with the help of iterator
  cout << "looping with the the help of iterator" << endl;
  for (auto i = itr; i != s.end(); i++)
  {
    cout << *i << " ";
  }
  return 0;
}