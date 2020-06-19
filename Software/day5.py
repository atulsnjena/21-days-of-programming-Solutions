import math

b=input()
bi=[]
ascii=0
for i in b:
  bi.append(i)
print(bi)
l=len(bi)-1
print(l)
for i in range(l,0,-1):
  ie=bi[i]
  print(i,ie)
  if (int(ie)!=0) and (int(ie)!=1):
    print("Try Again with valid input")  
  if int(ie) == 1:
    ascii = ascii + math.pow(2,int(l-i))
print(chr(int(ascii)))
#EUREKA
