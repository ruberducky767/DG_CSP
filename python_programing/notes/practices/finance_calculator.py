#DG 5th finacal calculator

income = float(input("what is youre income?"))
rent= float(input("what is your rent?"))
utilities = float(input("what is the cost of your utilitys?"))
groceries = float(input("what is the monthly cost of your groceries?"))
transport = float(input("what is the monthly cost of your transport?"))
def percent(cost,name):
    per= (cost / income)*100
    print(f"the percent of your income that goes to {name} is {per:.2f}%")


percent(income, "income")
percent (rent, "rent")
percent (utilities, "utilities")
percent (groceries, "groceries")
percent (transport, "transport")



