n=0
count=0
add=0
while (n!=-1):
    n=int(input("\n Enter the numbers and enter '-1' to displays the count, sum and average of odd numbers: "))
    if(n!=-1):
        if(n%2!=0):
            add=add+n
            count+=1

print("\n COUNT: ",count)
print("\n SUM: ",add)
if(count):
    print("\n AVERAGE: ",add/count)
else:
    print("\n All the numbers are even, can't find the average")
    


