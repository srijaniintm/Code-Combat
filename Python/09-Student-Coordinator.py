def sortSection(nums): # Function to sort the section in O(N) Time Complexity
    start,end = 0,len(nums)-1
    index = 0
    while start <= end:
        while nums[end] == "M3" and end >= 0:
            end -= 1
        if nums[start] == "M3" and start <= end:
            nums[start], nums[end] = nums[end], nums[start]
            end -= 1
        if nums[start] == "M1":
            nums[start], nums[index] = nums[index], nums[start]
            index += 1
        start += 1

for _ in range(int(input())): # Loop for testcases
    n = int(input()) # Taking input N
    arr = list(map(str,input().split())) # Taking input i.e. Students's Sections
    sortSection(arr) # Calling function to sort the sections
    print(*arr) # Printing the Sorted Sections