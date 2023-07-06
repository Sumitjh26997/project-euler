/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include<iostream>
using namespace std;

int main()
{
    long n=600851475143;
    long factor,max;

    if(n%2==0)
    {
        n=n/2;
        max=2;
        while(n%2==0)
        {
                n=n/2;
        }
        cout<<max<<endl;
    }
    else
    {
        max=1;
        cout<<max<<endl;
    }

    factor=3;
    while(n>1)
    {
        if(n%factor==0)
        {
            n=n/factor;
            max=factor;
            while(n%factor==0)
            {
                n=n/factor;
            }
            cout<<max<<endl;
        }
        factor=factor+2;
    }

    cout<<"max="<<max<<endl;

    return 0;
}
