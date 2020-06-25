ls=input().split()
temp=ls[len(ls)-1]
ls[len(ls)-1]=ls[0]
ls[0]=temp
print(ls)
