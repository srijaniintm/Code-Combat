for _ in range(int(input())): # Loop for testcases
    n = int(input()) # taking input N 
    arr = list(map(int,input().split())) # taking input
    temp = set() # set for storing unique elements
    result = 0 # Variable to store sum of unique elements
    for i in arr: # traversing the array
        if i not in temp: # checking is the element is unique
            result += i  
            temp.add(i) 
    print(result)