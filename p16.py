#215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
#What is the sum of the digits of the number 21000?

#!/usr/bin/pyhton

sum=0
power=2**1000

while(power>0):
    dig=power%10
    sum=sum+dig
    power=power//10

print(sum)
