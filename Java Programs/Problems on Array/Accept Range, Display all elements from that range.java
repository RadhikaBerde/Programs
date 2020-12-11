/* Write java program which accept N numbers from user and accept Range, Display all elements from that range

Input : N : 6
Start: 60
End : 90
Elements : 85 66 3 76 93 88
Output : 66 76 88

Input : N : 6
Start: 30
End : 50
Elements : 85 66 3 76 93 88
Output : 

*/

import java.lang.*;
import java.util.*;

class Number
{
   void Display(int Arr[],int iStart,int iEnd)
    {
      int i=0;

      if(iStart>iEnd)
       {
          System.out.println("Invalid Range");
	        return;
       }
	
      for(i=0;i<Arr.length;i++)
       {
	          if((Arr[i]>=iStart)&&(Arr[i]<=iEnd))
            {
	             System.out.print(Arr[i]+"\t");
	          }
        }
   }
}

class Demo
{
	public static void main(String arg[])
	 {
	   Scanner sobj=new Scanner(System.in);
	   int iStart=0;
	   int iEnd=0;
	   int iSize=0;
		
	  System.out.println("Enter Size of array: ");
	  iSize=sobj.nextInt();

	  System.out.println("Enter Start: ");
	  iStart=sobj.nextInt();
	
	  System.out.println("Enter End: ");
	  iEnd=sobj.nextInt();

          if(iStart>iEnd)
           {
              System.out.println("Invalid Range");
	            return;
           }
	  int arr[]=new int[iSize];
	 
	  System.out.print("Enter elements of array: ");
    for(int i=0;i<iSize;i++)
	   {
		    arr[i]=sobj.nextInt();
	   }

	  Number nobj=new Number();

	  nobj.Display(arr,iStart,iEnd);
	  }

}
