/* Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4 iCol = 5
Output :
 2 4 6 8 10
 1 3 5 7 9
 2 4 6 8 10
 1 3 5 7 9

 */

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i=0;
    int j=0;
    int iEvenCnt=2;
    int iOddCnt=1;

    if(iRow<0)
    {
        iRow=-iRow;
    }
    if(iCol<0)
    {
        iCol=-iCol;
    }

       for(i=1;i<=iRow;i++)
           {
                iEvenCnt=2;
                iOddCnt=1;
             for(j=1;j<=iCol;j++)
                {
                    if(i%2==0)
                    {
                       printf("%d\t",iOddCnt);
                       iOddCnt=iOddCnt+2;
                    }
                    else
                    {
                       printf("%d\t",iEvenCnt);
                       iEvenCnt=iEvenCnt+2;
                    }
                }
                printf("\n");
          }
}


int main()
{
 int iValue1 = 0, iValue2 = 0;

 printf("Enter number of rows and columns: \n");
 scanf("%d %d",&iValue1, &iValue2);

 Pattern(iValue1, iValue2);

 return 0;
}
