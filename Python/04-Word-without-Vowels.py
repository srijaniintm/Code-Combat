s = input() # Taking Input
for i in s: # Traversing the String
    if i not in "AEIOUaeiou": 
        print(i,end='') # Printing the character if it is not a vowel.
