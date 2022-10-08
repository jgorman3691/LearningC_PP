#include <iostream>
#include <iomanip>
#include <array>

int main()
{
	size_t n {};
	std::cout << "Please input a number n." << std::endl;
	std::cin >> n;
	if(n % 2 == 1)
	{
		n += 1;
	}
	//std::array<int,n> s {};
	for(size_t i {1}; i <= n; i+=2)
	{
		std::cout << std::setw(4) << "Number" << std::setw(8) << i * i << std::endl;
	}
}