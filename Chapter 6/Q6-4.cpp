#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <memory>

using namespace std;

// This section is where we initialize the global variables
int main()
{
   int i {};
   double j {};
   double sum {};
   double total{};
   int amount {};

//In this section, we ask the user for the size of the vector container.  If the amount is negative, we loop back and try again.  Otherwise, break out of the loop.

   while(true)
   {
      cout << "Please input an integer greater than 100,000.\n" << endl;
      cin >> amount;
      if(amount <= 100000) {
         cout << "Incorrect amount entered.  Please try again.\n" << endl;
         continue;
      }
      break;
   }

//In this section, we use the amount that was input to dynamically allocate memory and create a vector container.  We then proceed to calculate what was desired into a dummy variable for neatness.
//We do this while looping through the ENTIRE FUCKING CONTAINER!

   vector<double> *pie = new vector<double>[amount];
   for(i = 0; i < amount; i++)
   {
      j = (double) pow((i + 1), -2);
      pie->push_back(j);
   }
   for(i = 0; i < amount; i++)
   {
      sum  += pie->at(i);
   }
   sum *= 6;
   total = sqrt(sum);
   cout << "The end result of the calculation is: " << total << ".\n" << endl;
   return 0;
}