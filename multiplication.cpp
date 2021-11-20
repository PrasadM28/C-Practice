#include <iostream>
using namespace std;

int product(int first, int second)
{
    int result = first * second;
    return result;
}

int main()
{
    int number1, number2;
    cout << "Please input whole numbers of your choice for multiplication"<<endl;
    cin>>number1>>number2;

    int pdct = product(number1, number2);
    cout<< "Product is :"<< pdct<< endl;
}
