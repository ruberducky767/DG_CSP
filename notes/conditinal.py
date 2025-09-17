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

if name == "dominik":
    print("you are dominik")
elif name == "xander":
    print("you are xander")
else:
    print(f"hello {name}, you are not dominik")