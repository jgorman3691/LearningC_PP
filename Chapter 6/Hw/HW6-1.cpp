#include <iostream>
#include <iomanip>
#include <array>
#include <cctype>

int main()
{
	int max {50};
	std::array<int,50> odd {};
	int count {0};
	for(size_t i{};i < max;i++)
	{
		odd[i] = (i * 2) + 1;
		std::cout << std::setw(3);
		if((i % 10) == 0)
		{
			std::cout << std::endl;
		}
		std::cout << odd[i] << " ";
	}
}