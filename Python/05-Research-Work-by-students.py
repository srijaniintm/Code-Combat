n1 = int(input()) # Taking the size of class A
n2 = int(input()) # Taking the size of class B
A = list(map(int,input().split())) # Taking Attendance of each student of class A
B = list(map(int,input().split())) # Taking Marks of each student of class B
maxx = A[0]
for i in A: # Finding the maximum attendance from class A
    if i > maxx:
        maxx = i
print(maxx)
minn = B[0]
for i in B: # Finding the minimum marks from class B
    if i < minn:
        minn = i
print(minn)
