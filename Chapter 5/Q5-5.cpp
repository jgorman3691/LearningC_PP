#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   int maxlen {1000};
   vector<string> input;
   vector<string> output;
   int i {};
   int j {};
   while(true)
   {
      cout << "Please enter a string of text less than " << maxlen << " characters long, please \n" << endl;
      cin.getline(input, maxlen, '#');
      if(input.size() < maxlen)
      {
         break;
      }   
      else
      {
         cout << "Input exceeded the maximum length of " << maxlen << " characters. Please try again.\n" 
         << endl;
         continue;
      }
   }
   for(i=0;i<input.size();++i)
   {     
      ++i;
   }
   while(i >= input.size()/2)
      {
      output.at(j) = input.at(i);
      --i;
      ++j;
      }
   cout << "Now I'm going to print out the string in reverse order!\n" << endl;
   cout << output << endl;
   return 0;
}