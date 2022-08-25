#include <iostream>
#include <iomanip>
#include <ios>
#include <limits>
int main()
{
    int x = 78;
    int y = -43;
    int n = 10;
    std::cout << std::showpos;
    std::cout << std::setw(n) << x << std::setw(n) << " " << y << "\n";

    std::cout << std::noshowpos;
    std::cout << std::setw(n) << x << std::setw(n) << " " << y << "\n";

    int value = 986;
    int value2 = -897;
    int value3 = 482.898;

    std::cout << "value1==========================\n";
    std::cout << std::dec << value << " ";
    std::cout << std::hex << value << " ";
    std::cout << std::oct << value << " ";

    std::cout << "\nvalue2==========================\n";
    std::cout << std::dec << value2 << " ";
    std::cout << std::hex << value2 << " ";
    std::cout << std::oct << value2 << " ";

    std::cout << "\nvalue3==========================\n";
    std::cout << std::dec << value3 << " ";
    std::cout << std::hex << value3 << " ";
    std::cout << std::oct << value3 << " \n";
    std::cout << "===========================================";
    std::cout << "\nflushed message\n"
              << std::flush;
    //     long double var = 12;
    //     std::cout << std::setprecision(20) << std::showpoint << "\n" ;             << var;
    //     std::cout<< "numeric limit"<<std::numeric_limits<float><min>;
}
