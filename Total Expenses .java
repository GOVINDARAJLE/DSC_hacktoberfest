/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
		int t= sc.nextInt();
		for(int i=0;i<t;i++)
		{
		    double q=sc.nextDouble();
		    double p=sc.nextDouble();
		    
		    if(q>=1000)
		    {
            System.out.format("%.6f\n",(q*p)-(q*p*0.1) );
            // System.out.println();
		    }else
		    {
		        System.out.format("%.6f\n",q*p);
		    }
		}
	}
}
