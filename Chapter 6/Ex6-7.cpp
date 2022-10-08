// Example 6.7
// Using smart pointers

#include <iostream>
#include <iomanip>
#include <memory>
#include <vector>
#include <cctype>

int main()
{
	std::vector<std::shared_ptr<std::vector<double>>> records;
	size_t day {1};
	
	while(true)
	{
		auto day_records {std::make_shared<std::vector<double>>()};
		records.push_back(day_records);
		
		std::cout << "Enter the temperatures for day " << day++ << " separated by spaces.  Enter 1000 to end:\n";
	}
