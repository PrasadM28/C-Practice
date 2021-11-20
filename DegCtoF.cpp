#include <iostream>
#include <cmath>

int main()
{
    double celc {0};
    double fahr {0};

    std::cout << "Please enter a degree value in Celcius"<<std::endl;
    std::cin >> celc;
    // std::cout << std::endl;

    fahr = (9.0 / 5) * celc + 32;

    std::cout << celc << " Celcius is "<< fahr <<" Fahrenheit";

    return 0;
}