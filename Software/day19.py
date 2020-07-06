a=int(input())
b=int(input())
n=int(input())
o=0
for i in range(a,b):
    if i**2 <= b:
        o=o+1
p=o/(b-a+1)
def nCr(n, r): 
    return (fact(n) / (fact(r) * fact(n - r))) 
  
def fact(n): 
    f = 1
    for i in range(2, n+1): 
        f = f * i 
    return f
P=nCr(n,1)*(p**1)*((1-p)**(n-1))
print(P)
