/* Write a java program which accept string from user and count number of small characters.

Input : Marvellous
Output : 9 

*/

import java.lang.*;
import java.util.*;

class StringDemo 
{
    int CountSmall(String str)
    {
        int iCnt=0;
        int i=0;
        char arr[]=str.toCharArray();
        int size=arr.length;
        
        while(i<size)
        {
            if((arr[i]>='a')&&(arr[i]<='z'))
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
        StringDemo dobj=new StringDemo();

        System.out.println("Enter string: ");        
        String str=sobj.nextLine();

        int iRet=dobj.CountSmall(str);
        System.out.println("No of Small Characters are: "+iRet);
        
    }
}

