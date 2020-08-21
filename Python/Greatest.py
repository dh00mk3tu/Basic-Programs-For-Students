# Made By Anirudh Rath | dh00mk3tu
# Visit anirudhrath.tech to know more
# Greatest of Three Numbers

num1 = int(input("\n Enter First Number: "))
num2 = int(input("\n Enter Second Number: "))
num3 = int(input("\n Enter Third Number: "))

if (num1 >= num2) and (num1 >= num3):
   largest = num1
elif (num2 >= num1) and (num2 >= num3):
   largest = num2
else:
   largest = num3

print("The largest number is", largest)