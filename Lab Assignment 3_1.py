up=0
lo=0
d=0
s=0
array= input("Enter the value you want to check: ")
x=len(array)
for i in range (0,x):
    if(array[i].isupper()):
                print("UPPERCASE CHARACTERS : ",array[i])
                up+=1
    elif(array[i].islower()):
                print("\n LOWERCASE CHARACTERS : ",array[i])
                lo+=1
    elif(array[i].isdigit()):
                print("\n DIGITS : ",array[i])
                d+=1
    else:
                print("\n special character: ",array[i])
                s+=1
                #Space is counted in this 
    
print("Upper case count: ",up)
print("Lower case count: ",lo)
print("Number count: ",d)
print("Special character count: ",s)

