/*  Write a java program which accept string from user and return difference between frequency of small characters and frequency of capital characters. 

Input : MarvellouS
Output : 6 (8-2) 

*/
import java.lang.*;
import java.util.*;

class StringDemo 
{
    int CountSmall(String str)
    {
        int iCapCnt=0;
 	int iSmallCnt=0;
        int i=0;
        char arr[]=str.toCharArray();
        int size=arr.length;
        
        while(i<size)
        {
            if((arr[i]>='A')&&(arr[i]<='Z'))
            {
                iCapCnt++;
            }
	        else if((arr[i]>='a')&&(arr[i]<='z'))
            {
                iSmallCnt++;
            }
            i++;
        }
        return iSmallCnt-iCapCnt;
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

