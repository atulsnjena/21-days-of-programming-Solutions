#include <stdio.h>
#include <math.h>
int main ()
{
   int a,b,c,s=0,t;
   scanf("%d\n%d\n%d",&a,&b,&c);
   for (int i=0;i<b;i++)
   {  
       t=a*pow(c,i);
       printf("%d ",t);
       s+=t;
   } 
   printf("\n");
   printf("%d\n",s);
   return 0;
}
