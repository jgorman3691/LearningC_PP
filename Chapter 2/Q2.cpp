#include <iostream>
#include <iomanip>

int main()
{
  const long double pi = {3.141592653589793238};
  long double radius = {0.0};
  long double area = {0.0};
  long long int decimalPlace { 0 };
  std::cout << "What is the radius of the circle?" << std::endl;
  std::cin >> radius;
  std::cout << "To what decimal place would you like?" << std::endl;
  std::cin >> decimalPlace;

  area = {pi * radius * radius};
  
  std::cout << "The area of the circle is: " << std::setprecision(decimalPlace + 2) << area << "units.\n"
            << std::endl;

  return 0;
}