def lastIndex(arr,no): # Function to find the last index of no in arr
    for i in range(len(arr)-1,-1,-1):
        if arr[i] == no:
            return i
    return -1
    
n = int(input()) # Taking Input
arr = list(map(int,input().split())) # Taking Input
no = int(input()) # Taking Input 
print(lastIndex(arr,no)) # Printing the result
