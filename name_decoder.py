name = input ("what is your name\n").strip().title()
first_decor = input("how would you like to decorate the front of your name")
print ("please make the decor of the last part of your name the same as or flipped, of the front")
last_decor = input("how would you like to decorate the last part of youre name")
name_decord = first_decor+""+name+""+last_decor
print(name_decord)