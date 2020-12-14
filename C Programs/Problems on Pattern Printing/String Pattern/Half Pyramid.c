/* Write a program which accept string from user and print below pattern.

Input : “Marvellous”
Output :
 M
 M a
 M a r
 M a r v
 M a r v e
 M a r v e l
 M a r v e l l
 M a r v e l l o
 M a r v e l l o u
 M a r v e l l o u s

Input : “PPA”
Output :
 P
 P P
 P P A

 */

#include<stdio.h>

void Pattern (char str[])
{
    int iLength=0;
    int iCnt=0;
    int i=0;
    int j=0;
    int k=0;
    int iCol=1;
    while(str[iLength]!='\0')
    {
        iLength++;
        iCnt++;
    }
    for(i=1;i<=iLength;i++)
    {
        k=0;
        for(j=1;j<=iCol;j++)
        {
            printf("%c\t",str[k]);
            k++;
        }
        iCol++;
        printf("\n");
    }
}
int main()
{
    char str[30]={'\0'};

    printf("Enter string: ");
    scanf("%[^'\n']s",&str);

    Pattern (str);

    return 0;
}


