#!/usr/bin/pyhton

sum=0
power=2**1000

while(power>0):
    dig=power%10
    sum=sum+dig
    power=power//10

print(sum)
