#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   int maxlen {1000};
   vector<string> input;
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
   while(input.at(i) != '#')
   {   
      ++i;        
   }
   cout << "Now I'm going to print out the string in reverse order!\n" << endl;
   while(i >= 0)
   {
      cout << input.at(i) << endl;   
   }