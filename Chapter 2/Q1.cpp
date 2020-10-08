#include <iostream>

int main()
{
  const float pi = { 3.141592653589793238 };
  float radius = { 0.0 };
  float area = { 0.0 };
  std::cout << "What is the radius of the circle?" << std::endl;
  std::cin>> radius;

  area = {pi * radius * radius};

  std::cout << "The area of the circle is: " << area << "units.\n" <<std::endl;

  return 0;
}