/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    long sum=0,n=2000000;
    vector<bool> prime(n+1,true);

    //Sieve of Eratosthenes
    for(long p=2;p<=n;p++)
    {
        if(prime[p]==true)
        {
            //mark consonants
            for(long i=p*2;i<=n;i=i+p)
            {
                prime[i]=false;
            }
        }
    }

    //print primes and their sums
    for(long i=2;i<=n;i++)
    {

        if(prime[i])
        {
            cout<<i<<"="<<prime[i]<<endl;
            sum=sum+i;
        }
    }
    cout<<"sum="<<sum<<endl;
}
