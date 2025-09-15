#DG 6th Functions notes

#What a function is
# a indentation in code is called a whitespace
#if you add a space on a indent then the code breaks

int random(1)

def welcome():
    name = input("welcome what is youre name\n")
    print("hello {name}!")

    print("the funtion is over!")

    welcome()
    welcome()
    welcome()
    welcome()


def add(number):
    number=number+num_2
    print(number)
num_1 = 1
num_2 = 1

print(num_1, num_2)
add(num_1)
add(num_2)
(1 + 2)
(15, 10)


def believe(sentence):
    length = len(sentence)
    spot_one = random.randint(0,length -1)
    spot_two = random.randint(0,length -1)
    spot_three = random.randint(0,length -1)
    spot_four = random.randint(0,length -1)
    full_sentence = sentence.split(" ")
    full_sentence.insert(spot_one, "Beleive it!")
    full_sentence.insert(spot_two, "Beleive it!")
    full_sentence.insert(spot_three, "Beleive it!")
    full_sentence.insert(spot_four, "Beleive it!")
    sentence = full_sentence-join("")
    return sentence


new_sentence = believe("the cow jumped over the moon and never came back")

    



#the amount of welcomes or what ever is how many times it will print the funtion
#Why we use function
#How to write a function in Python
#What parameters and arguments are
#How to use parameters and arguments in python
#What return statements are
#How to use return statements in a program