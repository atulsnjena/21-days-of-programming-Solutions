#include <stdio.h>

int main(void) {
  int n;
	scanf("%d",&n);
	int d[10];
	for(int i=0;i < sizeof(d)/4;i++)
	{
	  d[i]=0;
	}
	int no=n;
	int dt;
	while(no!=0)
	{
	  dt=no%10;
	  d[dt]++;
	  no=no/10;
	}
	for(int i=0;i < sizeof(d)/4;i++)
	{
	  printf("The frequency of %d = %d\n",i,d[i]);
	}
	return 0;
}
