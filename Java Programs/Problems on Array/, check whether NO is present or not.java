/*1. Write java program which accept N numbers from user and accept one another number as NO , check whether NO is present or not.

Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : TRUE

Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : FALSE 

*/

import java.lang.*;
import java.util.*;

class Number
{
   boolean Check(int Arr[], int iNo)
     { 
       int i=0;
       boolean iAns=false;
	
       for(i=0;i<Arr.length;i++)
         {
            if(Arr[i]==iNo)
             {
		            iAns=true;
                break;
             }
         }
     return iAns;
   }
}

class Demo
{
	public static void main(String arg[])
	{

	    int iSize=0;
	    int iNo=0;
	    boolean bret =false;
	    int i=0;

	    Scanner sobj=new Scanner(System.in);
	    Number nobj=new Number();

	    System.out.println("Enter number of elements: ");
	    iSize=sobj.nextInt();
			    
	    System.out.println("Enter number: ");
	    iNo=sobj.nextInt();

	    int arr[]=new int[iSize];		
	    System.out.println("Enter all elements: ");
	    for(i=0;i<iSize;i++)
	      {
		       arr[i]=sobj.nextInt();
	      }

	   bret=nobj.Check(arr,iNo);
	   if(bret==true)
	    {
		     System.out.println("True");
	     }
	   else 
	     {
		      System.out.println("False");
	     }
	
	}
}

