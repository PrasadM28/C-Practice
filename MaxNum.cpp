#include<iostream>
#include<stdio.h>

using namespace std;

void printMax(int);

int main()
{
    int a,b,c;
    char rep;
    cout<< "Please enter three distinct numbers :" << endl;
    cin>>a>>b>>c;
    while(rep=='Y')
    {
        if(a>b)
        {
            if(a>c)
                printMax(a);
            else if(c>b)
                printMax(c);
            else
                printMax(a);
        }
        else
        {
            if(b>c)
            {
                printMax(b);
            }
            else{
                printMax(c);
            }
        }
        goto work;
        //cout<<"Do you want to check again? (Y/N)"<<endl;
        //cin>>rep;
    }
    work:
        cout<<"Do you want to check again? (Y/N)"<<endl;
        cin>>rep;

    return 0;
}

void printMax(int num)
{
    cout<<num<<" is the maximum number";
}
