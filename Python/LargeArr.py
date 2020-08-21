# Made By Anirudh Rath | dh00mk3tu
# Visit anirudhrath.tech to know more

# python function to find largest number 
# in arr[] of size n 

def largest(arr,n): 

	# Initialize maximum element 
	max = arr[0] 

	# Traverse array elements from second 
	# and compare every element with 
	# current max 
	for i in range(1, n): 
		if arr[i] > max: 
			max = arr[i] 
	return max


arr = [10, 324, 45, 90, 9808] 
n = len(arr) 
Ans = largest(arr,n) 
print ("Largest in given array is",Ans) 

# This code is contributed by Smitha Dinesh Semwal 
