arr = list(map(int,input().split())) # Taking Input
summ = sum(arr) # Calculating Sum of Array
target = summ - 100 # Calculating the target which makes the sum of array greater than 100
nums = set() 
for i in arr: # In this loop we're finding and removing those two elements whose sum is equal to the target.
  temp = target - i 
  if temp in nums:
    arr.remove(i)
    arr.remove(temp)
    break
  nums.add(i)
print(*arr) # Printing the result