#include <stdio.h>
int ctr=0,sum=0;
void fibo(int a,int b,int c)
{
  if(ctr<c)
  {
      sum=a+b;
      printf(" %d",sum);
      ctr++;
      a=b;
      b=sum;
      fibo(a,b,c);
  }
}

void main()
{
    int a,b,c;
    scanf("%d\n%d\n%d",&a,&b,&c);
    printf("%d %d",a,b);
    fibo(a,b,(c-2));
}
