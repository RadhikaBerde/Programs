/* Write a Java program which accept string from user and count number of capital characters.

Input : Marvellous Multi OS
Output : 4 

*/

import java.lang.*;
import java.util.*;

class StringDemo
{
    int CountCapital(String str)
    {
        char arr[]=str.toCharArray();
        int size=arr.length;
        int i=0;
        int iCnt=0;

        while(i<size)
        {
            if((arr[i]>='A')&&(arr[i]<='Z'))
            {
                iCnt++;
            }
            i++;
        }
        return iCnt;
    }
}

public class Demo
{
   public static void main(String arg[])
   {
       Scanner sobj=new Scanner(System.in);
       
       System.out.println("Enter String: ");
       String str=sobj.nextLine();
       
       StringDemo dobj=new StringDemo();
       
       int ret=dobj.CountCapital(str);
       System.out.println("No of capital characters are: "+ret);
   }
}
