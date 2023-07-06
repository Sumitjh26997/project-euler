#include<iostream>
using namespace std;

int main()
{
    int a,b,c,s=1000,flag=0;
    long product;

    for(a=3;a<=((s-3)/3);a++)
    {
        for(b=a+1;b<=((s-a-1)/2);b++)
        {
            c=s-a-b;
            if(c*c==a*a+b*b)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }

    product=a*b*c;
    cout<<product<<endl;
    return 0;
}
