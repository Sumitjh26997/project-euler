# Using names.txt (right click and 'Save Link/Target As...'), a 46K text file containing over five-thousand first names, begin by sorting it into alphabetical order. Then working out the alphabetical value for each name, multiply this value by its alphabetical position in the list to obtain a name score.

# For example, when the list is sorted into alphabetical order, COLIN, which is worth 3 + 15 + 12 + 9 + 14 = 53, is the 938th name in the list. So, COLIN would obtain a score of 938 × 53 = 49714.

# What is the total of all the name scores in the file?

#declare empty dictionary
almap = dict()

# create dictionary with alphabet as key and position as value
str = 'A'
for i in range(1,27):
    almap[str] = i
    str = chr(ord(str) + 1)

sum = 0

# read names from file
file = open("names.txt","r")
namestr = file.read()

# sort and split string and store in list
namelist = sorted(namestr.split(','))
print(len(namelist))

for i in range(len(namelist)):
    namesum = 0
    #remove ""
    name = namelist[i].strip('\"')
    # iterate through string and add value of each character
    for j in name:
        namesum = namesum + almap[j]
    sum = sum + (namesum * (i+1))
    print(name," : ",namesum," * ",(i+1)," = ",namesum * (i+1))

print(sum)