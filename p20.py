#n! means n × (n − 1) × ... × 3 × 2 × 1

#For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
#and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

#Find the sum of the digits in the number 100!

#!/usr/bin/pyhton

fact=1
num=100

for i in range(1,num+1):
    fact=fact*i

sum=0

while(fact>0):
    dig=fact%10
    sum=sum+dig
    fact=fact//10

print(sum)
