/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#include<iostream>
using namespace std;

int main()
{
    int a=1;
    int b=2;
    int c;
    int sum=b;
    //cout<<endl<<a<<"\t"<<b;
    for(int i=0;i<4000000;i++)
    {
        if(c>=4000000)
        {
            break;
        }
        else
        {
            c=a+b;
            a=b;
            b=c;
            if(c%2==0)
            {sum+=c;}
            //cout<<"\t"<<c;
        }
    }
    cout<<endl<<sum<<endl;
    return 0;
}
