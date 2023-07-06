/*
The decimal number, 585 = 10010010012 (binary), is palindromic in both bases.

Find the sum of all numbers, less than one million, which are palindromic in base 10 and base 2.

(Please note that the palindromic number, in either base, may not include leading zeros.)
*/

#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;

string binary(long num)
{
    int base=2;
    string bin="";

    while(num>0)
    {
        int rem=num%base;
        num=num/base;
        bin.append(to_string(rem));
    }
    reverse(bin.begin(),bin.end());

    return bin;
}

bool palindrome(string num)
{
    string rev=num;
    reverse(rev.begin(),rev.end());

    if(num.compare(rev)==0)
        return true;
    else
        return false;
}

int main()
{
    long sum=0;

    for(long i=0;i<1000000;i++)
    {
        if(palindrome(to_string(i)) && palindrome(binary(i)))
        {
            sum=sum+i;
        }
    }

    cout<<sum<<endl;
    return 0;

}
