/*1. Write Java program which accept N numbers from user and return difference between summation of even elements and summation of odd elements.

Input : N : 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181) 

*/


import java.lang.*;
import java.util.*;

class ArrayDemo
{
	public int Difference(int arr[])
	{
	    int i=0;
	    int iEven=0;
            int iOdd=0;
     
            for(i=0;i<arr.length;i++)
            if(arr[i]%2==0)
             {
            	iEven=iEven+arr[i];       
       	     }
       	    else
             {
            	iOdd=iOdd+arr[i];     
             }

        return iEven-iOdd;
      }
}

class Demo
{
	public static void main(String arg[])
	{
	        Scanner sobj=new Scanner(System.in);

		System.out.println("Enter size of array: ");
		int iSize=sobj.nextInt();
		
		int arr[]=new int[iSize];		
		System.out.println("Enter elements of array : ");
		
		for(int i=0;i<iSize;i++)
		  {
			arr[i]=sobj.nextInt();
		  }

		ArrayDemo aobj = new ArrayDemo();
		int ret = aobj.Difference(arr);
		System.out.println("Difference between summation of even & odd elements is : "+ret);
	}
}
