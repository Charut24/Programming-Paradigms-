num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))
num3 = int(input("Enter third number: "))

if (num1 >= num2) and (num1 >= num3):
   largest = num1
elif (num2 >= num1) and (num2 >= num3):
   largest = num2
else:
   largest = num3

print("The largest number is", largest)

factorial = 1

# check if the number is negative, positive or zero
if largest < 0:
   print("Sorry, factorial does not exist for negative numbers")
elif largest == 0:
   print("The factorial of 0 is 1")
else:
   for i in range(1,largest + 1):
       factorial = factorial*i
   print("The factorial of",largest,"is",factorial)
