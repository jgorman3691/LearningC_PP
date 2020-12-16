#include <iostream>

using namespace std;

int main()
{
   float x = {0.0};
   cout << "Please input a number between 1 and 100\n" << endl;
   cin >> x;
   if(0.0 < x)
   {
      if(100.0 > x)
      {
         if(x < 50)
         {
            cout << x << " is less than 50.\n" << endl;
            return 0;
         }
         else if (x > 50)
         {
            cout << x << " is greater than 50.\n" << endl;
            return 0;
         }
         else
         {
            cout << x << " is equal to 50.\n" << endl;
            return 0;
         }
      }
   }
   if(0.0 > x)
   {
      cout << x << " is below the range requested\n" << endl;
      return 0;
   }
   if (100.0 < x)
   {
      cout << x << " is above the range requested\n" << endl;
      return 0;
   }
   else
   {
      cout << "What the hell did you type?  It's not valid input\n" << endl;
      return 0;
   }
   return 0;
}