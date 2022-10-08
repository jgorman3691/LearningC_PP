// Example 6.2
// The size of pointers

#include <iostream>

int main()
{
	/* Print out the size of various data types, 
	as well as the corresponding pointer types */
	
	std::cout << sizeof(double) << " > " << sizeof(char) << std::endl;
	std::cout << sizeof(double) << " == " << sizeof(char*) << std::endl;
}