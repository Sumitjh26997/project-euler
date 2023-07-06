/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include<iostream>
#include<vector>
using namespace std;

bool checkprime(long n);

int main()
{
    long i,max=1;
    const long n=600851475143;
    bool flag;

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            flag=checkprime(i);
            if(flag==true)
            {
                if(i>max)
                {
                    max=i;
                    cout<<max<<endl;
                }
            }
        }
    }
    cout<<"final="<<max<<endl;
    return 0;
}

bool checkprime(long n)
{
    int flag=1;
    for(long i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
