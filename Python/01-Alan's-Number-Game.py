def reverse(n): # function to reverse the number.
    temp,rev,rem = n, 0, 0
    while temp != 0:
        rem = temp % 10
        if temp < 0:
            rem = rem - 10
        rev = rev*10 + rem
        temp = int(temp/10)
    return rev
    
n = int(input()) # taking input.
print(n+reverse(n)) # printing the addition of the number and its reverse.