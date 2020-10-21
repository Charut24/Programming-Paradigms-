def is_prime(num):
    if(num>1):
        for i in range(2,num):
            if((num % i) != 0):
                #number is prime
                return 1
            else:
                return 0


#driver code

num= int(input("\n Enter the positive number: "))
print(is_prime(num))
if(num==1):
    print("\n 1 is neither prime nor composite. ")
else:
    if(is_prime(num)==1):
        print("\n NUMBER IS PRIME.")
    else:
        print("\n NUMBER IS NOT PRIME. ")
