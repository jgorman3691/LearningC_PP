﻿// Example 5-8
// Using the continue statement to display ASCII character codes
#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits>

int main()
{
	// Output the column headings
	std::cout << std::setw(11) << "Character " << std::setw(13) << "Hexadecimal " << std::setw(9) << "Decimal " << std::endl;
	std::cout << std::uppercase;
	
	// Output characters and corresponding codes
	unsigned char ch {};
	do
	{
		if(!std::isprint(ch))
		{
			continue;
		}
		std::cout << std::setw(6) << ch << std::hex << std::setw(12) << static_cast<int>(ch) << std::dec << std::setw(10) << static_cast<int>(ch) << std::endl;
	} while(ch++ < std::numeric_limits<unsigned char>::max());
}