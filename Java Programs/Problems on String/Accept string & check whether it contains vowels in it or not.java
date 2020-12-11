/* Write a java program which accept string from user and check whether it contains vowels in it or not.

Input : marvellous
Output : TRUE

Input : Demo
Output : TRUE

Input : xyz
Output : FALSE 

*/

import java.lang.*;
import java.util.*;

class DemoString
{
    boolean CntVowels(String str)
    {
        int i=0;
        boolean bAns=false;
        char arr[]=str.toCharArray();
        int size=arr.length;
        
        while(i<size)
       
       {
           if((arr[i]=='A')||(arr[i]=='a')||(arr[i]=='E')||(arr[i]=='e')||(arr[i]=='I')||(arr[i]=='i')||(arr[i]=='O')||(arr[i]=='o')||(arr[i]=='U')||(arr[i]=='u'))
           {
               bAns=true;
               break;
           }
		          i++;
       }
           
          return bAns;
      }
}

class Demo
        {
             public static void main(String arg[])
             {
                 Scanner sobj=new Scanner(System.in);
                 
                 DemoString dobj=new DemoString();
                 
                 System.out.println("Enter String: ");
                 String str=sobj.nextLine();
                 
                 boolean bRet=dobj.CntVowels(str);

                 if(bRet==true)
                 {
                    System.out.println("Vowels are present");
                 }
               else
               {
                  System.out.println("Vowels are not present");
               }
            }
        }
