/* Write Java program which accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4 iCol = 5
Output : 
 4 4 4 4 4
 3 3 3 3 3
 2 2 2 2 2
 1 1 1 1 1 

*/

import java.lang.*;
import java.util.*;

class Pattern
{
    void PrintPattern(int iRow,int iCol)
     {
        int i=0;
        int j=0;
        
        for(i=iRow;i>0;i--)
         {
            for(j=iCol;j>0;j--)
             {
                System.out.print(i+"\t");
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
