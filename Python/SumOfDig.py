n = int(input("Enter any number: "))
s = 0 
while(n!=0):
    digit = n % 10
    s = s + digit
    n = n // 10
    
print("Sum of the Digits is: ", s) 
print()