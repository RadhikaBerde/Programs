/* Write a java program which accept string from user and display it in reverse order.

Input : MarvellouS
Output : SuollevraM 

*/

import java.lang.*;
import java.util.*;

class DemoStringX
 {
     void Reverse(String str)
     {
         char arr[]=str.toCharArray();
         int size=arr.length;
	       int iStart=0;
         int iEnd=size-1;
         int i=0;
         char temp='\0';
            
        while(iStart<iEnd)
        {
           temp=arr[iStart];
           arr[iStart]=arr[iEnd];
           arr[iEnd]=temp;           
           iStart++;
	         iEnd--;
        }

        System.out.println(arr);
     }
 }

class Demo
   {
       public static void main(String arg[])
         {
              Scanner sobj=new Scanner(System.in);
                 
              DemoStringX dobj=new DemoStringX();
                 
              System.out.println("Enter String: ");
              String str=sobj.nextLine();

	            dobj.Reverse(str);
                 
         }
    }

