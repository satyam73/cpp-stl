#include <iostream>
#include <map>

using namespace std;
// s.first for key
// s.second for value
//  key: value

// ordered map - returns in sorted order  -- implemented with red black tree or balance tree -- so for search time complexity O(log n)
// unordered map - return in random order  -- implemented by hash table -- so for search time complexity O(1)

// insert / erase / find /count -->  O(log n)

int main()
{
  map<int, string> m;

  m[1] = "Satyam";
  m[8] = "hello";
  m[2] = "Bajpai";

  // another way of inserting
  m.insert({5, "James"});
  cout << "before erasing " << endl;
  for (auto s : m)
  {
    cout << s.first << " " << s.second << " ";
    cout << endl;
  }

  cout << "is 2 present or not: " << m.count(5) << endl;
  cout << "is 12 present or not: " << m.count(12) << endl;

  m.erase(8);
  cout << "after erasing " << endl;
  for (auto s : m)
  {
    cout << s.first << " " << s.second << " ";
    cout << endl;
  }

  auto it = m.find(2);

  for (auto i = it; i != m.end(); i++)
  {
    cout << (*i).first << " "; // 2 5
  }
  return 0;
}