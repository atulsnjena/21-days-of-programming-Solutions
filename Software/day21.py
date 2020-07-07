i=input().split()
x=int(i[0])
y=int(i[1])
rq=int(input())
xt=0
yt=0
print("(0,0)",end=' ')
while xt!=rq and yt!=rq:
    if x>y and xt == 0:
        xt=x
    elif x<y and yt == 0:
        yt=y
    elif xt==0 and yt>x:
        xt=x
        yt=yt-x
    elif xt>y and yt==0:
        xt=xt-y
        yt=y
    elif xt==0 and 0<yt<x:
        temp=xt
        xt=yt
        yt=temp
    elif 0<xt<y and yt==0:
        temp=xt
        xt=yt
        yt=temp
    elif y>x and (yt-(x-xt))!=rq:
        xt=0
    elif x>y and (xt-(y-yt))!=rq:
        yt=0
    elif y>x:
        yt=yt-(x-xt)
        xt=x
    elif x>y:
        xt=xt-(y-yt)
        yt=y
    print("(%d,%d)" % (xt,yt) ,end=' ')
if yt==rq:
    print("(0,%d)"%(rq))
else:
    print("(%d,0)"%(rq))
