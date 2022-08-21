#include <iostream>
#include <string>

int main()
{
    double *a = nullptr;
    a = new double;
    *a = 34.535;
    std::cout << a<< " ";
    std::cout << *a << " ";
    delete a;
    std::cout << a << " ";
    int *s = nullptr;
    s = new int;
    *s = 43;
    std::cout << *s << " ";
    delete s;
    s  = nullptr;
    std::cout << *s << " ";


    int *ar = nullptr;
    ar = new int[3];
    ar[0] = 4;
    std::cout<<ar[0]<<" ";

    int arr[2][2] = {{1, 2}, {3, 4}};
    std::cout << arr[0][0] << " ";
    std::cout << arr[1][1] << " ";

    int ai = 54;
    int *p = &ai;
    int *q = p;
    int *x = q;
    std::cout << &ai << " " << &p << " " << p << " " << &q << " " << q << " " << &x << " " << x;
}