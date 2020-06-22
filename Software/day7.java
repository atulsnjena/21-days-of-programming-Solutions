import java.util.*;
import java.lang.*;
import java.io.*;

class palin
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner scan = new Scanner(System.in);
	    String x=scan.next();
	    char[] y=x.toUpperCase().toCharArray();
	    int i,j,ctr=0;
	    for (i = 0,j = x.length()-1; i<=j && j>=i;i++,j--)
	    {
	        if(y[i]!=y[j])
	           {
	               ctr++;
	               break;
	           }
	    }
	    if(ctr == 0)
	    {
	        System.out.println("YES");
	    }
	    else
	    {
	        System.out.println("NO");
	    }
	    scan.close(); 
	}
}
