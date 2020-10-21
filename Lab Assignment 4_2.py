def month(num):
    a = "January February March April May June July August September October November December".split()
    return a[num - 1]

#driver code
n=1
while(n==1):
    num = int(input("Enter the number between(1 to 12): "))
    if(num in range(1,12)):
        print(month(num))
    else:
        print("Wrong choice. ")

    n=int(input("\n TYPE '1' TO RUN AGAIN AND '0' TO EXIT: "))
