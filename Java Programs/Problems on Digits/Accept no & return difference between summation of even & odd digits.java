/* Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

Input : 2395
Output : -15 (2 - 17)

Input : 1018
Output : 6 (8 - 2)

Input : 8440
Output : 16 (16 - 0)

Input : 5733
Output : -18 (0 - 18)

*/

import java.lang.*;
import java.util.*;

class Digit
{
   int CountDiff(int iNo)
	  {
       int iDigit=0;
       int iEvenCnt=0;
       int iOddCnt=0;
       int iDifference=0;
       
	  while(iNo>0)
	   {
	     iDigit=iNo%10;
	     if(iDigit%2==0)
	      {
		       iEvenCnt=iEvenCnt+iDigit;
	      }
	     else
	      {
		        iOddCnt=iOddCnt+iDigit;
	      }

	      iNo=iNo/10;
	}

	      iDifference=iEvenCnt-iOddCnt;
        return iDifference;
       }   
}

class Demo
{
   public static void main(String arg[])
    {
	    Scanner sobj=new Scanner(System.in);
	
	    System.out.println("Enter the no: ");
	    int iNo=sobj.nextInt();
	
	   Digit dobj=new Digit();
	   int iRet=dobj.CountDiff(iNo);
	
	   System.out.println("Difference between summation of even digits & odd digits is: "+iRet);
   }
}
