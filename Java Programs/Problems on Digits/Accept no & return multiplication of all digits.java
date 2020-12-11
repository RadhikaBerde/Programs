/* Write a program which accept number from user and return multiplication of all digits.

Input : 2395
Output : 270

Input : 1018
Output : 8

Input : 9440
Output : 144

Input : 922432
Output : 864 

*/

import java.lang.*;
import java.util.*;

class Digit
{
	public int  Multiply(int iNo)
	{
	    int iCnt=0;
	    int iDigit=0;
	    int iMult=1;
	    
	    if(iNo<0)
	     {
	        iNo=-iNo;
	     }
	    
          while(iNo!=0)
           {
              iDigit=iNo%10;
              if(iDigit==0)
               {
                  iDigit=1;
               }
             iMult=iMult*iDigit;
             iNo=iNo/10;
          }
      	     return iMult;        
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

		int ret=dobj.Multiply(value);

		System.out.println("Multiplication of all digits is: "+ret);		
	}
}
