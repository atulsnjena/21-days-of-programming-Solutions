import random
a=int(input())
b=int(input())
n=int(input())
o=0
for j in range(n):
    k=random.randint(a,b)
    print(k,end=' ')
    for i in range(a,k+1):
        if i**2==k:
            o=o+1
print("")
p=o/n
print("Perfect Squares Observed=%d\nProbability=%f"%(o,p))
