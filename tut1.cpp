#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

class planet
{
public:
    string name;
    int earth;
    int adder(int x, int y)
    {
        int add = x + y;
        return add;
    }
};

int main()
{   

    planet(earth);
    planet(mars);
    earth.name = "vyaom";
    cout << earth.name << " " << earth.adder(54, 64) << " ";
    int num = 0b1010;
    int alpha = 0x00000c;
    long double p = 0.53566353583463536353635;
    std::string t = "jai";
    std::cout << sizeof(p); // sizeof ( t ) ;
    std::string prometheus;
    // int projector;
    // double nortonian;
    // // std::cout << sizeof(nortonian);
    // int super{3543};
    // auto xterno{false};
    // int xtream ;
    // std::cout << typeid(xterno).name();
    // std::cout << xterno;
}
