# DG 6th conditionals notes
# < less than
#> greater than
#>= greator or equal
#<= less than or equal
#== equal
#!= mot equal
#if its not tabed over its not appart of that

num = int(input("tell me a whole number: "))

if num < 10:
    print(f"{num} is a single digit number")
elif num < 100:
    print(f"{num} is a two diget number digit number")
else:
    print(f"{num}is a big number")

name = input("please tell me your name: ")
#nested conditionals
if name == "dominik":
    print("you are dominik")
    if num ==4:
        print ("that is a cow")
elif name == "xander":
    print("you are xander")
else:
    if name =="bob":
        print("you are bob")
    print(f"hello {name}, you are not dominik")

# AND OR NOT
#logic opperarors 

if num >=0 and num < 10:   #and means both must be true
    print(f"{num}is a single number")
elif num < 25 or num == 50: #or means only 1 must be true
    print(f"wow {num} is a realy cool number")
elif not num < 100: #not checks is the opposit is true
    print(f"{num}is a large number")
else:
    print(f"you typed in a {num}")

