#include <iostream>
#include <cmath>
int main()
{   int count = 0;
    const float gravity = 9.8;
    Name = "vyoam";
    int range_from;
    int range_till;
    std::cin >> range_from >> range_till;
    for (int i = range_from; i <= range_till; i++)
    {   bool is_prime = true;
        long x = 2;
        while (is_prime == true )
        {       
            if (i % x == 0){
                x = 2;
                is_prime = false;
            }

            x++;
            if (x > sqrt(i)){
                x = 2;
                break;
            }
        }
        if (is_prime == true && i != 0)
            {   count++;
                std::cout << i << " ";}

    }
    std::cout << "\nThe total number of prime numbers in range "<<range_from<<" to "<<range_till<<" are "<< count;
}
