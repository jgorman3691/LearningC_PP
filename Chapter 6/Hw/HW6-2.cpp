#include <iostream>
#include <iomanip>
#include <array>
#include <cctype>

int main()
{
	std::array<int,50> odd;
	int count {};
	int total {};
	int max {50};
	
	for(size_t i {};i < max;i++)
	{
		odd[i] = (i * 2) + 1;
		count++;
	}
	
	std::cout << std::setw(4);
		
	for(size_t j {1}; j <= max; j++)
	{
		
		std::cout << std::setw(3);
		std::cout << odd[j - 1] << " ";
		
		if((j % 10) == 0)
		{
			std::cout << std::endl;
		}
	}
	
	std::cout << "\n\n" << std::endl;
	
	for(int j {count - 1}; j >= 0; j--)
	{
		
		std::cout << std::setw(3);
		std::cout << odd[j] << " ";
		
		if((j % 10) == 0 && (j != 0))
		{
			std::cout << std::endl;
		}
	}
	std::cout << "\n\n" << std::endl;
}