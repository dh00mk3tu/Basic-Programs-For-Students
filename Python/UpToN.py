# Made By Vanshika Lal 
# Python program to print numbers
# from n to 1

# input the value of n
n = int(input("Enter the value of n: "))

# check the input value
if (n<=1):
	print ("n should be greater than 1")
	exit()
	
# print the value of n
print ("value of n: ",n)

# print the numbers from n to 1
# message
print ("numbers from {0} to {1} are: ".format(n,1))

# loop to print numbers 
for i in range(n,0,-1):
	print (i)
