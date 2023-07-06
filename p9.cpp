/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include<iostream>
using namespace std;

int main()
{
    int a,b,c,sum,flag=0;
    long product,pth;
    for(a=1;a<=1000;a++)
    {
        for(b=a+1;b<=1000;b++)
        {
            for(c=b+1;c<=1000;c++)
            {
                sum=a+b+c;
                pth=(a*a)+(b*b);
                if(sum==1000 && pth==c*c)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        if(flag==1)
            break;
    }
    cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
    product=a*b*c;
    cout<<product<<endl;
    return 0;
}
