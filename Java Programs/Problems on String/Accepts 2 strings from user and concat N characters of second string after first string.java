/* Write a java program which accepts 2 strings from user and concat N characters of second string after first string.Value of N should be accepted from user.
Note : If third parameter is greater than the size of second string then concat whole string after first string.

Input : Marvellous Infosystems
        Logic Building 
        5
Output : Marvellous Infosystems Logic

*/

import java.lang.*;
import java.util.*;

class DemoString
{
    void StrNCatX(String src, String dest, int iCnt) 
   {
     char arr[]=src.toCharArray();
     char brr[]=dest.toCharArray();
     char crr[]=new char[20];

    if(iCnt>brr.length)
     {
       iCnt=brr.length;
      }
  
         int size=arr.length;
         int size1=arr.length;
         int i=0;
         int j=0;
         int k=0;
         char temp='\0';

		while(i<size)
    {
		  crr[i]=arr[j];
		  i++;
		  j++;
    }
     crr[i]=' ';
     i++;

       while(iCnt>0)
        {
           crr[i]=brr[k];           
           i++;
	         k++;
	         iCnt--;
        }
        System.out.println(crr);
     }
 }
 
class Demo
{
  public static void main(String arg[])
	{
	   Scanner sobj=new Scanner(System.in);
	   
     System.out.println("Enter 1st String: ");
	   String src=sobj.nextLine();
          
	   System.out.println("Enter 2nd String: ");
	   String dest=sobj.nextLine();

	   System.out.println("Enter Count: ");
	   int iCnt=sobj.nextInt();

     DemoString dobj=new DemoString();
 	   
	   dobj.StrNCatX(src,dest,iCnt);
	}
}

