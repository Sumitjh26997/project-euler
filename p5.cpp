/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
232792560
65660817
*/

#include<iostream>
using namespace std;

int main()
{
    long n=1;
    int i,flag;

    while(1)
    {
        flag=0;
        for(i=1;i<=20;i++)
        {
            if(n%i==0)
            {
                flag++;
            }
            else
            {
                break;
            }
        }
        if(flag==20)
        {
            break;
        }
        else
        {
            cout<<n<<"="<<flag<<endl;
        }
        n++;
    }
    cout<<n<<endl;
}
