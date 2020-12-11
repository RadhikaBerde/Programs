/* Write Java program which accept N numbers from user and display all such elements which are divisible by 5.

Input : N : 6
Elements : 85 66 3 80 93 88
Output : 85 80 

*/

import java.lang.*;
import java.util.Scanner;

class ArrayDemo
{
	public void Difference(int arr[])
	{
	    int i=0;
	    int iEven=0;
            int iOdd=0;

            for(i=0;i<arr.length;i++)
	    if(arr[i]%5==0)
             {
            	System.out.println("Elements which are divisible by 5 : "+arr[i]);  
             }        
	}
}

class Demo
{
	public static void main(String arg[])
	{
	        Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the size of array: ");
		int iSize=sobj.nextInt();
		
		int arr[]=new int[iSize];
		System.out.println("Enter elements of array: ");
		for(int i=0;i<iSize;i++)
		  {
			arr[i]=sobj.nextInt();
		  }

		ArrayDemo aobj = new ArrayDemo();
		aobj.Difference(arr);		
	}
}
