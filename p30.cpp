#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double res=0;
    for(long i=2;i<=354294;i++)
    {
        long sum=0,num=i;

        while(num>0)
        {
            int dig=num%10;
            num=num/10;
            sum+=pow(dig,5);
        }

        if(sum==i)
        {
            res+=i;
            cout<<i<<endl;
        }
    }

    cout<<"result : "<<res<<endl;
    return 0;
}
