#include <iostream>
#include <bitset>

int main()
{
    short int a {10};

    std::cout << "a (dec) : " << std::dec << a << std::endl;
    std::cout << "a (bin) : " << std::bitset<16>(a) << std::endl;

    a <<= 2;
    std::cout << "a (shifted dec) : " << a << std::endl;
    std::cout << "a (shifted bin) : " << std::bitset<16>(a) << std::endl;

    // Left Shifting by 'n' bits will multiply the actual value by 2^n.
    // Right Shiftng by 'n' bits will divide the actual value by 2^n.

    // std::cout<<std::dec;

    // Logical Operators
    // a != a ;
    std::cout << "Not of a : " << std::bitset<16>(~a) << std::endl;

    return 0;

}