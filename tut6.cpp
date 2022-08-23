#include <iostream>
#include <iomanip>
int max(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    unsigned int x{21};
    unsigned int y{44};
    int add{x + y};
    int mul{x * y};
    double dev{static_cast<double>(x) / y};
    int sub{y - x};
    int mod{y % x};
    std::cout << add << " " << mul << " " << dev << " " << sub << " " << mod << "\n";
    y++;
    x++;
    std::cout << std::boolalpha;
    std::cout << (x >= y) << std::endl;
    std::cout << (x <= y) << std::endl;
    unsigned long big;
    unsigned long long biger;
    if (sizeof(big) > sizeof(biger))
    {
        std::cout << true;
    }
    else
    {
        std::cout << false << std::endl;
    }
    std::cout << max(sizeof(big), sizeof(biger));
    std::cout << "\n________________________________________\n";
    bool t = true;
    bool f = false;
    std::cout << "or :: " << (t || f) << std::endl;
    std::cout << "negator :: " << !t << " " << !f << std::endl;
    std::cout << "and :: " << (t && f) << std::endl;
    std::cout << "mix :: " << (!(t && f) || f) << std::endl;
    std::cout << "\n============================================\n";
    int width = 10;
    // std::cout << std::right;
    std::cout<<std::setfill('_');
    std::cout << std::setw(width) << "ram" << std::setw(width) << "100\n";
    // std::cout << std::left;
    std::cout << std::setw(width) << "Krishna" << std::setw(width) << "99\n";
    std::cout << std::setw(width) << "shiv" << std::setw(width) << "101\n";
    std::cout << std::setw(width) << "hanuman" << std::setw(width) << "500\n";

    // while (true)
    // {
    //     int i;
    // }
    return 0;
}