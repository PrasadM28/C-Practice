#include <iostream>
#include <bitset>
#include <iomanip>

int main()
{
    // Sample Variable
    unsigned int sample {0b01100110};

    // Masking Variables for use
    const unsigned int mask1 {0b00000001};
    const unsigned int mask2 {0b00000010};
    const unsigned int mask3 {0b00000100};
    const unsigned int mask4 {0b00001000};
    const unsigned int mask5 {0b00010000};
    const unsigned int mask6 {0b00100000};
    const unsigned int mask7 {0b01000000};

    std::cout<<" sample : " <<std::setw(20) << std::bitset<8>(sample) << std::endl;

    // Setting bit 4
    sample |= mask4 ;
    std::cout<<" sample_Set : " <<std::setw(20) << std::bitset<8>(sample) << std::endl;

    // Resetting bit 2
    sample &= (~mask2);
    std::cout<<" sample_ReSet : " <<std::setw(20) << std::bitset<8>(sample) << std::endl;

    // Checking a bit value in a position
    unsigned int bit2 = (sample & mask3) >> 2;
    std::cout<<" Bit 2 : " <<std::setw(20) << std::bitset<1>(bit2) << std::endl;

    // Toggling a bit 
    sample ^= (mask3);
    std::cout<<" Toggled bit : " <<std::setw(20) << std::bitset<8>(sample) << std::endl;


    return 0;
}