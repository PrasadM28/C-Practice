#include <iostream>
#include <bitset>

int main()
{
    int a = 20;
    std::cout << "a(dec) : " << std::dec << a << std::endl;
    std::cout << "a(hex) : " << std::hex << a << std::endl;
    std::cout << "a(oct) : " << std::oct << a << std::endl;
    std::cout << "a(binary) : " << std::bitset<8>(a) << std::endl;

    return 0;
}