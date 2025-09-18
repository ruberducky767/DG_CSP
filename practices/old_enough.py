#DG 6th Old enough larose
name = input("what is your name\n")

age = int(input("how old are you\n"))

if age >= 18:
    print("you can vote")
elif age >= 16:
    print("you can drive by your self")
elif age >= 15:
    print(" you can get a learners permit")
else:
    if age >= 18:
        print("you can vote")