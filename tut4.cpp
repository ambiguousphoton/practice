#include <iostream>
int main()
{
    bool positive_state{true};
    bool negetive_state{false};
    if (positive_state == true)
    {
        std::cout << "state +ve : " << positive_state;
    }
    else
    {
        std::cout << "state -ve : " << negetive_state;
    }
    std::cout << "\n"
              << sizeof(negetive_state);
}