#include <stdio.h>
#include <string.h>
int main() {
	char str[50],cpy[50],cohr[50],max,max2,temp;
	int ctr=0,cont[50],k=0;
	scanf("%[^\n]%*c",str);
	strcpy(cpy,str);
	for (int i=0;cpy[i]!='\0';i++)
	{
	    if(cpy[i]!='@')
	    {
	    ctr=0;
	    temp=cpy[i];
	    for (int j=0;cpy[j]!='\0';j++)
	    {
	        if(cpy[j]==temp)
	        {
	            ctr++;
	            cpy[j]='@';
	        }
	    }
	    cohr[k]=temp;
	    cont[k++]=ctr;
	    }
	}
	cohr[k]='\0';
	cont[k]=51;
	ctr=cont[0];
	max=cohr[0];
	for(int i=0;cont[i]!=51;i++)
	{
	    if (cont[i]>ctr)
	    {
	    max=cohr[i];
	    ctr=cont[i];
	    }
	}
	temp=ctr;
	ctr=0;
	for(int i=0;cont[i]!=51;i++)
	{
	    if (cont[i]<temp && cont[i]>ctr)
	    {
	    max2=cohr[i];
	    ctr=cont[i];
	    }
	}
	for(int i=0;str[i]!='\0';i++)
	{
	    if (str[i]==max)
	    str[i]=max2;
	}
    printf("%c\n%s",max,str);
    return 0;
}
