/* Write a program which accept number from user and return the count of odd digits.

Input : 2395
Output : 3

Input : 1018
Output : 2

Input : -1018
Output : 2

Input : 8462
Output : 0

*/

import java.lang.*;
import java.util.*;

class Digit
{
	public int CountOdd(int iNo)
	 {
	    int iCnt=0;
	    int iDigit=0;
	    
	    if(iNo<0)
	     {
	         iNo=-iNo;
	     }
	    
          while(iNo!=0)
           {
              iDigit=iNo%10;
              if(iDigit%2!=0)
               {
                  iCnt++;
               }
              iNo=iNo/10;
           }
       	    return iCnt;      
	}
}
class Demo
{
      public static void main(String arg[])
	{
		Digit dobj = new Digit();
		Scanner sobj=new Scanner(System.in);

		System.out.println("Enter number: ");
		int value=sobj.nextInt();

		int ret=dobj.CountOdd(value);

		System.out.println("Number of Odd Digits are: "+ret);		
	}
}
