#include <iostream>
#include <cmath>
int main()
{
   int x = 2;
   int y = 11;
   std::cout << std::pow(x, y) << "\n";
   x = 3;
   y = 3;
   std::cout << std::pow(x, y) << "\n";
   double e = std::exp(1);
   std::cout << e << "\n";
   std::cout << std::log(e) << "\n"
             << std::log(e * e * e) << "\n"
             << std::log(e * e * e * e * e) << "\n";
   std::cout << log10(10000000) << "\n";
   std::cout << sqrt(121) << "\n";
   double primee = sqrt(13);
   std::cout << pow(primee, 2) << "\n";
   std::cout << round(abs(-17.494347));
}