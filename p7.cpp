/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10001st prime number?
*/

#include<iostream>
using namespace std;

int main()
{
    long count=0;
    long limit=(10001*11)+1;
    cout<<limit<<endl;

    bool prime[limit+1];
    for(long i=1;i<=limit;i++)
    {
        prime[i]=true;
    }

    //Sieve of Eratosthenes
    for(long p=2;p<=limit;p++)
    {
        if(prime[p]==true)
        {
            for(long i=p*2;i<=limit;i=i+p)
            {
                prime[i]=false;
            }
        }
    }

    //print the 10001st prime number
    for(long i=2;i<=limit;i++)
    {
        if(prime[i])
        {
            count++;
            cout<<count<<"="<<i<<endl;
            if(count==10001)
            {
                break;
            }
        }
    }

    return 0;
}
