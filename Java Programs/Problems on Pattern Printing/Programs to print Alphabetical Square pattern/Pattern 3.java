/* Write Java program which accept number of rows and number of columns from user and display below pattern.

Input : iRow = 3 iCol = 5

Output : 
 A A A A A
 B B B B B 
 C C C C C 

*/

import java.lang.*;
import java.util.*;

class Pattern
{
    void PrintPattern(int iRow,int iCol)
     {
        char ch='A';
        for (int i=1;i<=iRow;i++)
         {
            for(int j=1;j<=iCol;j++)
             {
                System.out.print(ch+"\t");
             }
            ch++;
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
