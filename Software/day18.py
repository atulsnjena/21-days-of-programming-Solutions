n= int(input())
a=[]
for i in range(n):
    a.append(input())
for i in a:
    temp = i.split()
    tem=[int(temp[0]),int(temp[1])]
    con=True
    add=0
    sub=0
    useadd=False
    usesub=False
    while con:
        if tem[0]%tem[1] == 0:
            con=False
        elif((tem[0]+add)%tem[1]==0):
            useadd=True
            con=False
        elif((tem[0]-sub)%tem[1]==0):
            usesub=True
            con=False
        else:
            add=add+1
            sub=sub+1
    if usesub == True and useadd == True:
        if add == sub:
            print(add)
    elif useadd == True:
        print(add)
    elif usesub == True:
        print(sub)
