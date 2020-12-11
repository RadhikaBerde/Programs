/* Accept string from user and check whether the string is palindrome or not without considering its case.

Input : 1abccBA1
Output : TRUE 

*/

import java.lang.*;
import java.util.*;

class DemoString
{
   boolean StrPallindrome(String str) 
   {       
        char arr[]=str.toCharArray();
        int size=arr.length-1;
	      int iStart=0;
        int iEnd=size;
        boolean bRet=true;
        char temp='\0';
            
        while(iStart<iEnd)
        {
           if((arr[iStart]==arr[iEnd])||(arr[iStart]+32==arr[iEnd])||(arr[iStart]-32==arr[iEnd]))
	          {
		             iStart++;
	               iEnd--;
	          }
          else
	         {
                bRet=false;
	              break;
	         }	   
        }  
          
		return bRet;  
   }
}

class Demo
{
  public static void main(String arg[])
	{
	   Scanner sobj=new Scanner(System.in);
	   
     System.out.println("Enter 1st String: ");
	   String src=sobj.nextLine();

     DemoString dobj=new DemoString();
 	   
	   boolean bRet=dobj.StrPallindrome(src);
     if(bRet==true)
	    {
		      System.out.println("String is Palindrome");
	    }
	   else
	    {
		      System.out.println("String is not Palindrome");
	    }            
   }
}
