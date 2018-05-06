max=1

for i in range(1,100):
    for j in range(1,100):
        pow=i**j
        sum=0

        while(pow>0):
            dig=pow%10
            sum=sum+dig
            pow=pow//10

        if (sum>max):
            max=sum

print(max)
