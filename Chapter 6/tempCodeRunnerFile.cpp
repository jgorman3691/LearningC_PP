#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main(){
   int primes = 50;
   auto (*odds) { new unsigned[primes] };
   int i {};
   int j {};

   for(i = 0; i < primes; ++i)
   {
      if(i % 2)
      {
         (*odds)[j] = i;
         ++j;
      }
   }
   j = 0;
   for(i = 0; i < primes; (*odds)++)
   {
      ++j;
      cout << setw(10) << (*odds)[i];
      if((i + 1) % 10 == 0)
      {
         cout << endl;
      }
   }
   for(j = i;j >= 0; j--)
   {
      cout << setw(10) << (*odds)[j];
      if((j + 1) % 10 == 0)
      {
         cout << endl;
      }
   }
}