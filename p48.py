#!/usr/bin/python

sum=0
count=0

for i in range(1,1001):
        sum=sum+i**i

while(count<10):
    dig=sum%10
    print(dig)
    sum=sum//10
    count=count+1
