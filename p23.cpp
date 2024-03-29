/*A perfect number is a number for which the sum of its proper divisors is exactly equal to the number. For example, the sum of the proper divisors of 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 28 is a perfect number.

A number n is called deficient if the sum of its proper divisors is less than n and it is called abundant if this sum exceeds n.

As 12 is the smallest abundant number, 1 + 2 + 3 + 4 + 6 = 16, the smallest number that can be written as the sum of two abundant numbers is 24. By mathematical analysis, it can be shown that all integers greater than 28123 can be written as the sum of two abundant numbers. However, this upper limit cannot be reduced any further by analysis even though it is known that the greatest number that cannot be expressed as the sum of two abundant numbers is less than this limit.

Find the sum of all the positive integers which cannot be written as the sum of two abundant numbers.*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int limit=28123;
    bool nab[limit+1];
    bool ab[limit+1];
    int k=0;

    for(int i=1;i<=limit;i++)
    {
        nab[i]=false;
        ab[i]=false;
    }

    /*filter abundant no's.*/
    for(int i=2;i<=limit;i++)
    {
        int sum=1;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                if(j!=sqrt(i))
                {
                    sum+=j;
                    sum+=i/j;
                }
                else
                    sum+=j;
            }
        }

        if(sum>i)
            ab[i]=true;
    }

    for(int i=1;i<=limit;i++)
    {
       for(int j=1;j<i;j++)
       {
           if(ab[j] && ab[i-j])
                nab[i]=true;
       }
   }

    long long result=0;
    for(int i=1;i<=limit;i++)
    {
        if(nab[i]==false)
            result+=i;
    }

    cout<<"result = "<<result<<endl;
    return 0;
}
