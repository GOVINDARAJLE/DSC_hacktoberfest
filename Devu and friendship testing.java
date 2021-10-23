/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int testcase=sc.nextInt();
		while(testcase-->0){
		    int n=sc.nextInt();
		    int day[]=new int[n];
		    for(int i=0;i<n;i++){
		        day[i]=sc.nextInt();
		    }
		    int c=n;
		    for(int i=0;i<n;i++){
		        for(int j=i+1;j<n;j++){
		            if(day[i]==day[j] && i!=j){
		                c--;
		                break;
		            }
		        }
		    }
		    System.out.println(c);
		    
		}
	}
}
