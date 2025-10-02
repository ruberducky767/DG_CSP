name = input("Hello welcome to the finance calculator what is your name\n").title().strip()
print ("Welcome " + name)
income =float(input(f"what is your monthly income"))
rent =float(input(f"what is your cost rent"))
utilities=float(input(f"what is your montly utilites bill"))
groceres =float(input(f"what is your monthly groceres"))
transportation=float(input(f"what is the your transportation cost"))

def percent(type, amount):
    per=amount/income *100
    print(f"your" +type+ "is" +per+"% income")
percent
print("utilities",utilities)
print("groceres",groceres)
print("transportation",transportation)