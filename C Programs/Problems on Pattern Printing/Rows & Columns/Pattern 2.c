/* Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4 iCol = 3
Output :
 1 2 3
 1 2 3
 1 2 3
 1 2 3

 */
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i=0;
    int j=0;

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}

int main()
{
 int iRows = 0;
 int iColumns = 0;

 printf("Enter number of rows: ");
 scanf("%d",&iRows);
 printf("Enter number of columns: ");
 scanf("%d",&iColumns);

 Pattern(iRows,iColumns);

 return 0;
}

