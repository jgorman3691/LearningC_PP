#include <iostream>

using namespace std;

int main()
{
   int x = {0};
   int y = {0};
   cout << "Please input two integers\n" << endl;
   cin >> x;
   cin >> y;
   while (x <= 0 && y <= 0)
   {
      if(x <= 0 || y <= 0)
      {
         cout << "ERROR: integers of zero or less are not allowed.  Please reinput two non-negative or non-zero integers\n" << endl;
         cin >> x;
         cin >> y;
      }
   }
   if ((x - y) <= 0)
   {
      if(y % x == 0)
      {
         cout << x << " is a multiple of " << y << endl;
      }
   }
   else if((y - x) <= 0)
   {
      if(x % y == 0)
      {
         cout << y << " is a multiple of " << x << endl;
      }
   }
   return 0;
}