import java.util.Scanner;
import java.lang.System;
class Main
{
  public static boolean isPrime(int n)
  {
    int ctr=0;
    for(int j=1;j<=n;j++)
    {
      if(n%j==0)
      {
        ctr++;
      }
    }
    if (ctr == 2)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  public static void main(String[] args)
  {
    int a,b;
    Scanner Scan =new Scanner(System.in);
    a=Scan.nextInt();
    b=Scan.nextInt();
    for (int i=a;i<=b;i++)
    {
      if(isPrime(i))
      {
        System.out.print(i+" ");
      }
    }
    Scan.close();
    System.out.print("\n");
  }
}
