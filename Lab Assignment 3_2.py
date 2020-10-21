def DecimalToBinary(num):
    if num > 1:
        DecimalToBinary(num // 2)
    print(num % 2,end='')
#since a print() statement ends in new line by default so by using end = ''
#we are giving the command to print in same line in continuation


# decimal number
number = int(input("Enter any positive number: "))
DecimalToBinary(number)
    
