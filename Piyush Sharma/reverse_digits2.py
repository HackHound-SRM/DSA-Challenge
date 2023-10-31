name=int(input("Enter the number to get reversed value: "))
n=""
sample=str(name)
n2=len(sample)
for i in sample:
    n=n+sample[n2-1]
    n2=n2-1
print("Reversed number is: ", int(n))