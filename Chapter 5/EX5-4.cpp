// Example 5-4
// Multiple initializations in a loop expression

#include <iostream>
#include <iomanip>

int main()
{
	unsigned int limit{};
	std::cout << "This program calculates n! and the sum of the integers up to values 1 and limit.\n";
	std::cout << "What would you like to choose for the upper limit? ";
	std::cin >> limit;
	
	// Output column headings
	std::cout << std::setw(8) << "integer" << std::setw(8) << " sum" <<  std::setw(20) << " factorial" << std::endl;
	
	for( unsigned long long n {1}, sum{}, factorial{1}; n <= limit; n++)
	{
		sum += n;
		factorial *= n;
		std::cout << std::setw(8) << n << std::setw(8) << sum <<std::setw(20) << factorial << std::endl;
	}
}