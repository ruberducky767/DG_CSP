#DG 6th string notes
#What makes something a string?
# a string is made of () and ""and '' but it can only be ""or'' it cant be 
#Why do we have strings?
#we use strings to ask questions or print something
#How do stupid proofing and sanitization relate to each other?

#What is debugging?
#a bug is any error in the code that is making it not run or not run properly
#syntax error
#logic error
#its when somthing unexpected happens in the code like when somthing is not in order
num_1 = 1
num_2 = 2
print(num_1 + num_2)
#run-time Error
#is when somthing breaks the code when its running
letter = "A"
#is fixing problems in my code
#How do you debug the different types of errors?
#Describe what each of the methods below does:
#find()
#concatenate (add)
#upper()
#lower()
#strip()





# examples of strings
first_name = input("what is your first name:\n").strip().title()

last_name = input("what is your last name:\n").strip().title()

full_name = first_name +" "+ last_name

sentence = "the quick brown fox jumps over the lazy dog."

print("welcome to my programe", full_name+"!")

print(sentence.find("brown"))
print(sentence[10:15])

#stupid profing striping
#.lower wil make it lower cais