#include <iostream>

using namespace std;

int main()
{
  int x = {0};
  int y = {0};
  cout << "Please input two integers\n" << endl;
  cin >> x;
  cin >> y;
  if (x == y) {
    cout << "The two integers are different\n" << endl;
  }
  else
  {
    cout << "These two integers are the same\n" << endl;
  }
  return 0;
}
