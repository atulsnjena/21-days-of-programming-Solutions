from itertools import combinations
l=int(input())
a=input().split()
x=int(input())
ctr=0
for i in range(1,l+1):
    for j in combinations(a,i):
        sum=0
        for k in range(len(j)):
            sum+=int(j[k])
        if sum<=x:
            ctr+=1
if ctr>0:
    print(ctr)
else:
    print(-1)
