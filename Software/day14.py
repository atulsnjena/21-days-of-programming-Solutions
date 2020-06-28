n=input("The original string is :")
nsub=input("\nThe substring you want to replace :")
nrep=input("\nThe string you want to use instead :")
nl=n.split()
for i in range(len(nl)):
    if nsub == nl[i]:
        nl[i]=nrep
n=" ".join(nl)
print("\n",n)
