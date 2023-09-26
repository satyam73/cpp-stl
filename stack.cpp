#include <iostream>
#include <stack>

using namespace std;
int main()
{
  stack<int> st;

  st.push(4);
  st.push(10);
  st.push(2);
  st.push(5);

  cout << "stack size is: " << st.size() << endl;
  cout << "top element: " << st.top() << endl;
  cout << "is empty: " << st.empty() << endl;
  st.pop();
  cout << "top element: " << st.top() << endl;
  cout << "stack size is: " << st.size() << endl;
  return 0;
}