def reverse(num):
    global rev
    rev = 0
    while(num>0):
        rem= num%10
        rev = (rev*10) + rem
        num = num // 10
    print("\n Reverse of entered number = ",rev)

#driver code

num= int(input("\n ENTER THE NUMER WHOSE REVERSE YOU WANT TO FIND: "))
reverse(num)
if(num==rev):
    print("\n IT IS A PALLINDROME. ")
else:
    print("\n NOT A PALLINDROME. ")

