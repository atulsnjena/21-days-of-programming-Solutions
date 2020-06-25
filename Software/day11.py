rt=input().split()
ti=rt[0].split(':')
if(rt[1] == "PM" and int(ti[0])!=12):
    ti[0]=str(int(ti[0])+12)
if(rt[1] =="AM" and ti[0]=="12"):
    ti[0]="00"
st=":".join(ti)    
print(st)
