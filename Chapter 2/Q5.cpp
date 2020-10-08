#include <iostream>
#include <math.h>

int main()
{
  // Initializing Variables

  float bmi = {0.0};
  float weight_k {0.0};
  float height_m {0.0};
  unsigned int weight_lb {0};
  unsigned int feet {0};
  unsigned int inches {0};

  // Unit Conversions and Constants

  float lb_to_k = {1/2.2};
  float ft_to_m = {0.3048};
  unsigned int ft_to_in = {1/12};

  //And now to get the values from the user

  std::cout << "This is a program that calculates BMI, and it requires some information.\n";
  std::cout << "Please input your weight in pounds (lbs)";
  std::cin >> weight_lb;
  std::cout << "Now please input your height (ft): ";
  std::cin >> feet;
  std::cout << "and now inches, please: " << std::endl;
  std::cin >> inches;

  // Here the conversions and calculations are performed

  feet += inches * ft_to_in;
  weight_k = weight_lb * lb_to_k;
  height_m = feet * ft_to_m;

  bmi = (weight_k / (pow(height_m, 2)));

  std::cout << "The resulting BMI is: " << bmi << std::endl;

  return 0;
}