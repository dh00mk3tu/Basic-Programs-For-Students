n = int(input("Enter the value of n: "))

if (n<=1):
	print ("n should be greater than 1")
	exit()

print ("value of n: ",n)

print ("numbers from {0} to {1} are: ".format(n,1))


for i in range(n,0,-1):
	print (i)
