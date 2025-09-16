#DG 5th finacal calculator

income = (input("what is youre income?"))
rent = (input("what is your rent?"))
utilities = (input("what is the cost of your utilitys?"))
groceries = (input("what is the monthly cost of your groceries?"))
transport = (input("what is the monthly cost of your transport?"))
def percent(per):
    per=rent/income*100
    per=utilities/income*100
print ("youre rent is " + rent+" thats " + str((int(rent)/int(income))*100) + "% of youre income")
print ("youre utilities are " + utilities+" thats " + str((int(utilities)/int(income))*100) + "% of youre income")
print ("youre groceries are " + groceries+" thats " + str((int(groceries)/int(income))*100) + "% of youre income")
print ("youre transport is " + transport+" thats " + str((int(transport)/int(income))*100) + "% of youre income")
total = (int(rent)+int(utilities)+int(groceries)+int(transport))
print ("youre total expenses are " + str(total)+ ".")
savings = ( int(income)-int(total))
print ("you should be saving " + str(savings)+" thats " + str((int(savings)/int(income))*100) + "% of youre income")