#include <iostream>
#include <stdlib.h>
#include <iomanip>
// using namespace std;
int main()
{
    short int ni;
    unsigned int n = 342425;
    // long long int m;
    double m;
    long double b{};
    // double double m;
    std::cout << sizeof(ni) << " ";
    std::cout << sizeof(b) << " ";
    std::cout << sizeof(m) << " \n" ;
    float x = 2.423553423423522342352f;
    double y = 2.423553423423522342352;
    long double z = 2.423553423423522342352L;
    std::cout << std::setprecision(20);
    std::cout << x <<" "<< y <<" "<< z<<"\n";
    double d { 1.9342445424232e3};
    std::cout << std::setprecision(7);
    std::cout << d <<std::endl;
    double s  = 1;
    double s1{s/0};             /// +ve infinity
    s = -1;
    double s2 {s/0};            /// -ve infinity    
    std::cout<<s1<<" "<<s2<<" "<<s2/s1<<"\n";
    // double xer = 0.0;
    // double yer = 0.0;
    // std::cout<<xer/yer;
    float sd{42342442.879f};
    std::cout<<sd<<"\n";   
    
}