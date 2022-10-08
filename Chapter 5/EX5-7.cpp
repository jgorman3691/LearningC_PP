// Example 5-7
// Making times tables using nested loops

#include <iostream>
#include <iomanip>
#include <cctype>

int main()
{
	size_t table {};
	const size_t table_min {2};
	const size_t table_max {12};
	char reply {};
	
	do
	{
		std::cout << "What size table would you like(" << table_min << " to " << table_max << ")?";
		std::cin >> table;
		std::cout << std::endl;
		
		// Make sure the table is sized right
		
		if(table<table_min || table > table_max)
		{
			std::cout << "Invalid value, program terminating." << std::endl;
			return 1;
		}
		
		// Create the top line of the table
		std::cout << std::setw(6) << " |";
		for(size_t i {1}; i <= table; ++i)
		{
			std::cout << " " << std::setw(3) << i << " |";
	    }
	    
	    // Create the separator row
	    for(size_t i {}; i <= table; ++i)
	    {
	    	std::cout << "—-—-";
	    }
	    std::cout << std::endl;
	    
	    for(size_t i {1};i <= table; ++i)
	    {
	    	// Iterate over the rows
	    	std::cout << " " << std::setw(3) << i << " |";
	    	for(size_t j {1}; j <= table; ++j)
	    	{
	    		std::cout << " " << std::setw(3) << i*j << " |";
	    	}
	    	std::cout << std::endl;
	    }
	} while(std::tolower(reply) == 'y');
}
	    	