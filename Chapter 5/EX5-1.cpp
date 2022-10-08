// Example 5.1
// Using a for loop with an array

#include <iostream>

int main()
{
	const unsigned size {6};
	unsigned height[size] {26, 37, 47, 55, 62, 75};
	
	unsigned total {};
	for(size_t i {}; i < size; i++)
	{
		total += height[i];
	}
	
	const unsigned average {total/size};
	std::cout << "The average height is " << average << std::endl;
	
	unsigned count {};
	for(size_t i {}; i < size; i++)
	{
		if( height[i] < average) count++;
	}
	std::cout << count << " people are below the average height." << std::endl;
}