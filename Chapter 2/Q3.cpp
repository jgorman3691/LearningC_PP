#include <iostream>
#include <math.h>

int main()
{
  unsigned int inches = { 0 };
  unsigned int inches_result = { 0 };
  unsigned int feet_result = { 0 };
  const int inches_per_foot = {12};

  std::cout << "This program converts inches to feet and inches.  Please input the amount of inches: " << std::endl;
  std::cin >> inches;

  inches_result = inches % inches_per_foot;
  feet_result = (int)(inches/inches_per_foot);

  std::cout << "The result is " << feet_result << "feet, " << inches_result << "inches." << std::endl;
  
  return 0;
}