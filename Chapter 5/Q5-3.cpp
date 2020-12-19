#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <locale>

using namespace std;

int main()
{
   locale loc ("en_US.UTF8");
   int i {};
   char c {};
   vector<string> sentence {};
   cout << "Please type in a sentence.  This program will count all the non-whitespace characters"
   cout << ", terminating when a '#' is encountered:\n" << endl;
   cin >> sentence;
   sentence.push_back('#');
   do
   {
      if(isspace(sentence.at(i), loc)
      {
         continue;
      }
      ++i;
      
   }
   while(sentence.at(i) != '#')
   cout << "The final count is " << i << " characters that were not whitespace.\n" << endl;
   return 0;
}