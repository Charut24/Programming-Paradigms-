import math
def add(num1,num2):
    s=num1+num2
    print("\n SUM: ",num1,"+",num2," = ",s)

def subtract(num1,num2):
    if(num1>num2):
        sub=num1-num2
        print("\n SUBTRACTION: ",num1,"-",num2," = ",sub)
    else:
        sub=num2-num1
        print("\n SUBTRACTION: ",num2,"-",num1," = ",sub)


def multi(num1,num2):
    multiply=num1*num2
    print("\n MULTIPLICATION: ",num1,"*",num2," = ",multiply)

def divide(num1,num2):
    div=num1/num2
    print("\n DIVISION: ",num1,"/",num2," = ",div)

def roots(num1,num2):
    root1=math.sqrt(num1)
    print("\n ROOT 1 = ",root1)
    root2=math.sqrt(num2)
    print("\n ROOT 2 = ",root2)

def log_of_num(num1,num2):
    log_num1 = math.log10(num1)
    print ("Logarithm base 10 of first number is : ",log_num1)
    log_num2 = math.log10(num2)
    print ("Logarithm base 10 of second number is : ",log_num2)
    
def sin_and_cosine(num1,num2):
    sin_num1=math.sin(math.radians(num1))
    print("\n Sine value of first number: ",sin_num1)
    cosine_num1=math.cos(math.radians(num1))
    print("\n Cosine value of first number: ",cosine_num1)
    sin_num2=math.sin(math.radians(num2))
    print("\n Sine value of second number: ",sin_num2)
    cosine_num2=math.cos(math.radians(num2))
    print("\n Cosine value of second number: ",cosine_num2)

#driver code
n=1
while(n==1):
    num1=float(input("\n ENTER THE FIRST NUMBER: "))
    num2=float(input("\n ENTER THE SECOND NUMBER: "))

    print("\n Select from the following choice. ")
    print("\n 1. ADD")
    print("\n 2. SUBTRACT")
    print("\n 3. MULTIPLY")
    print("\n 4. DIVIDE")
    print("\n 5. ROOTS")
    print("\n 6. LOG")
    print("\n 7. SINE AND COSINE")
    choice=int(input("\n ENTER YOUR CHOICE: "))
    if(choice==1):
        add(num1,num2)

    elif(choice==2):
        subtract(num1,num2)

    elif(choice==3):
        multi(num1,num2)

    elif(choice==4):
        divide(num1,num2)

    elif(choice==5):
        roots(num1,num2)

    elif(choice==6):
        log_of_num(num1,num2)

    elif(choice==7):
        sin_and_cosine(num1,num2)

    else:
        print("\n WRONG CHOICE.")

    n=int(input("\n TYPE '1' TO RUN AGAIN AND '0' TO EXIT: "))



    
    

        
    
