/* Write Java program which accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4 iCol = 4
Output : 
 A B C D
 A B C D
 A B C D
 A B C D 

*/

import java.lang.*;
import java.util.*;

class Pattern
{
    void PrintPattern(int iRow,int iCol)
    {        
        for (int i=1;i<=iRow;i++)
         {
            char ch='A';
            for(int j=1;j<=iCol;j++)
             {
                System.out.print(ch+"\t");
                ch++;
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
        
        System.out.println("Enter no of rows: ");
        int iRow=sobj.nextInt();
        
        System.out.println("Enter no of columns: ");
        int iCol=sobj.nextInt();
        
        pobj.PrintPattern(iRow,iCol);
     }
}
