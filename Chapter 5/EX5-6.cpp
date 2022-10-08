// Example 5-6
// Using a do-while loop to manage input

#include <iostream>
#include <cctype>

int main()
{
	char reply {};
	int count {};
	double temperature {};
	double total {};
	
	do
	{
		std::cout << "Enter a temperature reading: ";
		std::cin >> reply;
	}while(std::tolower(reply) == 'y');
	
	std::cout << "The average temperature is " << total/count << std::endl;