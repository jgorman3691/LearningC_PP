#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
   int i {};
   int end = {};
   vector<int> = container;
   cout << "Please enter an integer: \n" << endl;
   cin >> end;
   for(i=0; i<end; ++i)
   {
      if(i % 7)
      {
         if(i % 13)
         {
            container.push_back(i)
         }
      }
   }
   cout >> "Here are all the integers, excluding those divisible by 7 or 13: \n\n\n" << endl;
   for(i = 0;i < end;++i) 
   { 
      if(i != (i % 10))
      {
         cout << setw(8) << container.at(i) << endl;
         continue;
      }
      cout << "\n" << endl;
   }
   return 0;
}