#DG 6th Old enough LaRose
name = input("what is your name\n").title().strip()

age = int(input("how old are you\n"))
if age >= 100:
    print(f"wow {name} you are old enough to be in the museum")
elif age >= 18:
    print("you can vote. be carfull its a big world out there")
elif age >= 16:
    print("you can drive by your self. be freeee")
elif age >= 15:
    print(" you can get a learners permit. spread your wings and dont crash")
elif age >= 4:
    print("you can go to school. the road is open now its your turn to choose your path")
else:
    print(f"{name} you should be using your imagination >:(")