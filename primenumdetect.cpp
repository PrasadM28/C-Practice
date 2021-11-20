#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int num, rem;
    int i=2;
    cout<<"Enter a number to check if it is a Prime number or not:"<<endl;
    cin>>num;

    while(i < num)
    {
        rem = num%i;
        //if(i==num){
        if((rem==0))
        {
            cout<<num<<" is not a prime number."<<endl;

        }
        else
        {
            i++;
        }
    }
    cout<<num<<" is a prime number"<<endl;
        //}
        //else


    return 0;

}
