#include <iostream>
#include <iomanip>
#include <memory>
#include <cctype>
#include <vector>
#include <cmath>

int main()
{
	int max {};
	std::cout << "Please input the amount of elements desired." << std::endl;
	std::cin >> max;
	std::vector<float> tox(max);
	