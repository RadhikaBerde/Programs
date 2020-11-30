/* Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 3 iCol = 5
Output :
 5 4 3 2 1
 5 4 3 2 1
 5 4 3 2 1

 */

 #include<stdio.h>

 void Pattern(int iRow, int iCol)
{
    int i=0;
    int j=0;

    if(iRow<0)
    {
        iRow=-iRow;
    }
    if(iCol<0)
    {
        iCol=-iCol;
    }

    for(i=iRow;i>=1;i--)
    {
        for(j=iCol;j>=1;j--)
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


