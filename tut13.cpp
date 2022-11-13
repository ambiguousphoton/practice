#include <iostream>
#include <typeinfo>
int main()
{
    short int x, y;
    x = 17;
    y = 23;
    char a{15};
    char b{50};

    std::cout << sizeof(x) << " " << sizeof(a) << "\n";
    auto xy = x + y;
    std::cout << a << " " << b << " " << 65 << "\n";
    auto ab = a + b;
    std::cout << xy << " " << sizeof(xy) << typeid(xy).name() << "\n";
    std::cout << ab << " " << sizeof(ab) << typeid(ab).name() << "\n";
    std::cout << static_cast<char>(ab);
}
