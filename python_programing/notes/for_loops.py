#DG 6th time and for loops notes

import datetime


current = datetime.datetime.now()
hour = current.hour
#print(f"the time is in secounds since jane 1, 1970: {epoch}")
print(f"the time is: {current}")
print(f"the hour is {hour}")

#lists
siblings = ["dominik", "xander", "adalynn","cow"]
print(siblings[1])
print(siblings)
siblings[0]= "dom"
siblings.remove("cow")
print(siblings)


#for loop
for sibling in siblings:
    print(f"hello {sibling}")
    #print("hi")

for x in range(1,1000,10):
    print(x)

#while loops
#infinint loops
#while True:
    #print("oh no!!!!")



#good boy
i = 1


while i < 21:
    if i % 2 == 0:
        print(f"{i} is even")
    else:
        print(f"{i} is odd")
    i +=1


import random 

number = random.randint(1,20)
x=1
"""while x != number:
    print("duck")
    x += 1
print("goose!")"""

while True:
    if number == x:
        print("goose!")
        break
    else:
        print("duck")
        x += 1

#an iteration is one instens of a loop
