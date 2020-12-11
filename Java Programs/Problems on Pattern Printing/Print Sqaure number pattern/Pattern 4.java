/* Write Java program which accept number of rows and number of columns from user and display below pattern.

Input : iRow = 3 iCol = 5
Output :
 5 4 3 2 1
 5 4 3 2 1
 5 4 3 2 1

*/

import java.lang.*;
import java.util.*;

class Pattern
{
    void PrintPattern(int iRow,int iCol)
     {
       int i=0;
       int j=0;

       for(i=1;i<=iRow;i++)
        {
           for(j=iCol;j>0;j--)
            {
               System.out.print(j+"\t");
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
        
        System.out.println("Enter no of Columns: ");
        int iCol=sobj.nextInt();
        
        pobj.PrintPattern(iRow,iCol);
     }
}
