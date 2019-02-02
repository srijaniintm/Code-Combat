def secondLargest(arr): # Function to find the second largest
    if len(arr) <= 1:
        return -1
    largest, secondL = arr[0], -1
    for i in range(1,len(arr)):
        if arr[i] > largest:
            secondL = largest
            largest = arr[i]
        elif arr[i] > secondL and arr[i] != largest:
            secondL = arr[i]
    return secondL
    
n = int(input()) # Taking Input
arr = list(map(int,input().split())) # Taking Input
no = secondLargest(arr) # Storing the second largest
if no == -1: # If there was no second largest number in the array
    print(-1)
else: 
    print(*[i+1 for i in range(len(arr)) if arr[i] == no]) # Print the result if there exist a second largest
