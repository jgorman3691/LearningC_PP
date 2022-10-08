// Example 6.5
// Calculating primes using pointer notation

#include <iostream>
#include <iomanip>

int main()
{
	const size_t max {100};
	long primes[max] {2L};
	size_t count {1};
	long trial {3L};
	
	while(count < max)
	{
		bool isprime { true };
	
		// Try dividing the candidates by all the gathered primes
		for(size_t i {};i < count && isprime;++i)
		{
			isprime = trial % *(primes + i) > 0;
		}
		if(isprime)
		{
			*(primes + count++) = trial;
		}
	
		trial += 2;
	}
	
	// Output primes 10 to a line
	std::cout << "The first " << max << " primes are:" << std::endl;
	for(size_t i {};i < max;i++)
	{
		std::cout << std::setw(7) << *(primes + i);
		if((i + 1) % 10 ==0)
		{
			std::cout << "\n" << std::endl;
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
