# Made By Anirudh Rath | dh00mk3tu
# Visit anirudhrath.tech to know more
# Python3 program to find 
# factorial of given number 
  
def factorial(n): 
    # single line to find factorial 
    return 1 if (n==1 or n==0) else n * factorial(n - 1)  
  
   
print ("Enter you name")
num = input()
print ("Factorial of ",num," is", factorial(num))
