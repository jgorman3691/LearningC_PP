#include <iostream>
#include <iomanip>
#include <array>
#include <memory>
#include <cctype>
#include <cmath>
#include <iterator>

int main()
{
	double sum {};
	double total {};
	
	std::cout << "Please input the size of the array you wish to create." << std::endl;
	int amt {};
	std::cin >> amt;
	std::unique_ptr<float[]> parray { std::make_unique<float[]>(amt)};
	float *ray { (parray.get()) };
	for(int i{};i < sizeof(parray);++i)
	{
		*(ray + i) = 1/((i + 1)* (1 + i));
	}
	
	for(size_t i {};i < sizeof(parray);i++)
	{
		sum+=parray[i];
	}
	sum *= 6;
	total = std::sqrt(sum);

	std::cout << total << std::endl;
	delete ray;
}