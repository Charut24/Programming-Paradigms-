def is_Sorted(num1,num2,num3):
        if(num1<num2 and num1<num3 and num2<num3 or num1>num2 and num1>num3 and num2>num3):
            return True
        else:
            return False

    
#driver code
ch='y'
while(ch=='y'):
    num1=int(input("\n Enter the first number: "))
    num2=int(input("\n Enter the second number: "))
    num3=int(input("\n Enter the third number: "))
    print(is_Sorted(num1,num2,num3))
    ch=input("\n ENTER 'y' TO RUN AGAIN AND 'n' TO EXIT. ")        

