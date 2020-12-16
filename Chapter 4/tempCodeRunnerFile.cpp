#include <iostream>

int main()
{
   int x = {0};
   int y = {0};
   std::cout << "Please input two integers\n" << std::endl;
   std::cin >> x;
   std::cin >> y;
   if(x == y) {
      std::cout << "These two integers are the same\n" << std::endl;
   }
   else{
      std::cout << "The two integers are different\n" << std::endl;
   }
   return 0;
}