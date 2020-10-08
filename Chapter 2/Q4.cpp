#include <iostream>
#include <math.h>

int main()
{
  long int h_in = {0};
  long int d_in = {0};
  long int d_ft = {0};
  float angle_deg = {0.0};
  const int in_per_ft = {12};
  float tree_ft = {0.0};
  float tree_in = {0.0};

  std::cout << "To find the height of the tree, please first enter your height in inches: ";
  std::cin >> h_in;
  std::cout << "the distance in feet, ";
  std::cin >> d_ft;
  std::cout << "then inches: ";
  std::cin >> d_in;
  std::cout << "and the angle.";
  std::cin >> angle_deg;
  std::cout << ".\n" << std::endl;

  d_in += d_ft * in_per_ft;
  tree_in = h_in + d_in * tan(angle_deg);
  tree_ft = tree_in / in_per_ft;

  std::cout << "The height of the tree is: " << tree_ft << "feet.\n" << std::endl;
  
  return 0;
}