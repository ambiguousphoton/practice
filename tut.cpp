#include <iostream>
int main()
{
    char c{'cd'};
    char a{696};
    std::cout << a << "\n";
    char val{65};
    std::cout << static_cast<int>(val + 1) << "\n"
              << static_cast<char>(val + 5) << "\n";
    std::cout << sizeof(val);
}
