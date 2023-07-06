/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include<iostream>
using namespace std;

bool palindrome(long n);
int main()
{
    long n,max=100;
    for(int i=100;i<=999;i++)
    {
        for (int j=100;j<=999;j++)
        {
            n=i*j;
            if(palindrome(n))
            {
                if(n>max)
                {
                    max=n;
                }
            }
        }
    }
    cout<<endl<<max<<endl;
    return 0;
}

bool palindrome(long n)
{
    long m,dig,rev=0;
    m=n;
    while(m>0)
    {
        dig=m%10;
        rev=rev*10+dig;
        m=m/10;
    }

    if(rev==n)
        return true;
    else
        return false;
}
