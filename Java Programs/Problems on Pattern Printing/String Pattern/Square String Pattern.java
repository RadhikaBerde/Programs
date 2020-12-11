/*1. Write Java program which accept String from user and display below pattern.

Input : Hello
Output : 
 H e l l o
 H e l l o
 H e l l o
 H e l l o 

*/

import java.lang.*;
import java.util.*;

class Pattern
{
    void PrintPattern(String str)
     {
       int i=0;
       int j=0;
       
       char arr[]=str.toCharArray();
       int size=arr.length;

       for(i=1;i<=size;i++)
        {
            int k=0;
           for(j=1;j<=size;j++)
            {
               System.out.print(arr[k]+"\t");
               k++;               
            }
             System.out.println();
        }
   }    
}

class Demo
{
    public static void main(String arg[])
     {
        Scanner sobj=new Scanner(System.in);
        Pattern pobj=new Pattern();
        
        System.out.println("Enter string:  ");
        String str=sobj.nextLine();
               
        pobj.PrintPattern(str);
    }
}
