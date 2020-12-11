/* Write Java program which accept number of rows and number of columns from user and display below pattern.

Input : iRow = 3 iCol = 4
Output : 
 1 2 3 4
 5 6 7 8
 9 10 11 12 

*/

import java.lang.*;
import java.util.*;

class Pattern
{
    void PrintPattern(int iRow,int iCol)
     {
       int i=0;
       int j=0;
       int no=1;
       for(i=1;i<=iRow;i++)
        {
           for(j=1;j<=iCol;j++)
            {
               System.out.print(no+"\t");
               no++;
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
