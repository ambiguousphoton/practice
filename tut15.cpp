#include <iostream>
#include <cmath>
#include <typeinfo>
#include <string>
#include <iomanip>
int main()
{
    int X = 1;
    auto result = (X >= 0) ? "x is a positive number " : "x is a negitive number";
    std::cout << result;
    bool y = false;
    auto result2 = y ? 1.39428f : 3.00000000001d;
    std::cout << std::showpoint << std::setprecision(20);
    std::cout << typeid(result2).name() << " " << result2;

    // const char pen{'p'};
    // const char eraser{'e'};
    // const char circle{'c'};
    // int tool{'p'};
    // switch (tool)
    // {
    // case pen:
    //     std::cout << "pen";
    //     break;
    // case eraser:
    //     std::cout << "eraser";
    //     break;
    // case circle:
    //     std::cout << "circle";
    //     break;
    // }
}