#declare empty dictionary
almap = dict()

str = 'a'
for i in range(1,27):
    almap[str] = i
    str = chr(ord(str) + 1)

#print(almap)
sum = 0

file = open("names.txt","r")
namestr = file.read()

namelist = namestr.split(',')
namelist.sort()
print(len(namelist))

for i in range(len(namelist)):
    namesum = 0
    name = namelist[i].strip('\"')
    name = name.lower()
    for j in name:
        namesum = namesum + almap[j]
        prod = namesum * (i+1)
    sum = sum + prod
    print(name," : ",namesum," * ",(i+1)," = ",prod)

print(sum)