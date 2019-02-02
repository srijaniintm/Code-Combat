def prod(s): # Function to find the digit product from a string
    p = 1
    for i in s:
        if i.isdigit():
            p *= int(i)
    return p

for _ in range(int(input())): # Loop for testcases
    print(prod(input())) # Printing the product
