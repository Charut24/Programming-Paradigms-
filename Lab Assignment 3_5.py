def power_of_2(number):
    while(number!=0):
        while(number != 1):
            if(number % 2 !=0):
                return False
            number = number // 2

        return True

#idriver code
number=int(input("\n enter the positive number: "))
if(power_of_2(number)):
    print("\n Yes power of 2")
else:
    print("\n Not a power of 2")

