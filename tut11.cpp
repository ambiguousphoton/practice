#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{   const float radtodegree = 57.296;
    long double temp = 0;
    std::cout << std::setprecision(20);
    long double values[6];
    for (int i = 0; i < 5; i++)
    {
        values[i] = std::sin(temp / radtodegree );
        temp += 30;
    }
    temp = 0;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "sin(" << temp << ") = " << values[i] << "\n";
        temp += 30;
        if (temp == 60){
        std::cout << "sin(45) = "<<sin(45/radtodegree)<<"\n"; }
        }
}
