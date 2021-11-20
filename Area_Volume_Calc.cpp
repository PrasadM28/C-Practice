#include <iostream>

int area(double length, double breadth )
{
    int area_result = length * breadth;
    return area_result;

}

int volume(double area_in, double height )
{
    int volume_result = area_in * height;
    return volume_result;
}

int main()
{
    double len{};
    double brdth{};
    double hght{};

    std::cout << "Welcome to Box Calculator! Enter length, breadth, height of the box :" << std::endl;
    std::cout << "Length : ";
    std::cin >> len ;
    std::cout << "Breadth : ";
    std::cin >> brdth;
    std::cout << "Height : ";
    std::cin >> hght;

    double area_out = area(len, brdth);
    double volume_out = volume(area_out, hght);

    std::cout << "The base area is : "<< area_out<< std::endl;
    std::cout << "The volume is : "<< volume_out<< std::endl;

    return 0;

}