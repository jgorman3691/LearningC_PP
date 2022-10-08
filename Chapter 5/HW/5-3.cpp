#include <iostream>
#include <iomanip>
#include <vector>
#include <cctype>

int main()
{
	// Declaring the variables
	int count {0};
	int length {};
	size_t i{0};
	std::vector<char> phrase {};
	bool test { true };
	
	std::cout << "Please enter a phrase." << std::endl;
	std::cin >> phrase;
	length = phrase.size();
	
	do
	{
		if(std::isalpha(phrase.at(i))
		{
			count++;
			i++;
			continue;
		}
		else if(std::isdigit(phrase.at(i))
		{
			test = false;
			continue;no te
		}
		i++;
	} while(test || i < length)
	
	std::cout << "there are " << std::setw(6) << count << " non white spac characters in the phrase." <<std::endl;