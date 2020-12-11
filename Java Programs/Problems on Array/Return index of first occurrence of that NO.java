/* Write java program which accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO.

Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 1

Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : -1 

*/
    
import java.lang.*;
import java.util.*;

class Number
{
 int FirstOcc(int Arr[], int iNo)
 { 
     int i=0;
     int iAns=-1;

     for(i=0;i<Arr.length;i++)
     {
        if(Arr[i]==iNo)
       {
            iAns=i;
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
	    int ret =0;
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

	    ret=nobj.FirstOcc(arr,iNo);
	    if(ret==-1)
	     {
	       System.out.println("No is not present");
	     }
	    else
	     {
		     System.out.println("First Ocurrance is: "+ret);
	     }		
	
	}
}
    
