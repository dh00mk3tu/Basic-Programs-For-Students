print("\n 1. Circle")
print("\n 2. Triangle")
print("\n 3. Square")
print("\n 4. Rectangle")

ch = int(input("\n Enter your Choice: "))

if (ch == 1):
    print("Area Of Circle")
    a = int(input("\n Enter the Radius : "))
    c = 3.14*a*a
elif (ch == 2):
    a = int(input("\n Enter the Height: "))
    b = int(input("\n Enter the Base: "))
    c = 0.5*a*b
elif (ch == 3):
    a = int(input("\n Enter the Side: "))
    c = a*a
elif (ch == 4):
    a = int(input("\n Enter the Length: "))
    b = int(input("\n Enter the Breath: "))
    c = a*b
else: 
    print("\n\t Wrong Input!")

print("The result is : ", c)