/* Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 5 iCol = 5

Output :
 $ * * * *
 # $ * * *
 # # $ * *
 # # # $ *
 # # # # $

 */

 #include<stdio.h>

 void Pattern(int iRow,int iCol)
 {
     for(int i=0;i<iRow;i++)
     {
         for(int j=0;j<iCol;j++)
         {
             if(i==j)
              {
                 printf("$\t");
              }
             else if(j<i)
              {
                 printf("#\t");
              }
             else
              {
                printf("*\t");
              }
         }
         printf("\n");
     }
 }

 int main()
 {
     int iRow=0;
     int iCol=0;

     printf("Enter no of Rows: ");
     scanf("%d",&iRow);

     printf("Enter no of Columns: ");
     scanf("%d",&iCol);

     Pattern(iRow,iCol);

     return 0;
 }
