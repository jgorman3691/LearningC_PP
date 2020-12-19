#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{

	long int limit {};
	int i {}, j {};
	vector<signed int> primes;
	vector<long signed int> squares
	cout << "This program outputs the square of every odd integer.
		  << "Please input an integer:\n" << endl;
	cin >> limit;
	cout << "Thank you.  Starting..." << endl;
	while(i < limit)
	{
	   if(i % 2)
	   {
	      int temp = primes.at(i) * primes.at(i);
	      squares.push_back(temp);
	      ++i;
	   }
	   else {continue}
	}
	cout << setw(10) << "Integers |" << setw(10) << " Square \n" << endl;
	cout << "-----------" << "|" << "-----------" << endl;
	while(j < squares.size())
	{
	   cout << setw(10) << j << " | " << setw(10) << squares.at(j) << endl;
	   cout << "-----------" << "|" << "-----------" << endl;
	   ++j;
	}
	return 0;
}  