/* Write a program which accept string from user and print below pattern.

Input : “Marvellous”
Output :
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s
 M a r v e l l o u s

Input : “PPA”
Output :
 P P A
 P P A
 P P A

*/
#include<stdio.h>

void Pattern (char str[])
{

    int i=0;
    int j=0;
    int k=0;
    int iCnt=0;
    int iLength=0;

    while(str[iLength]!='\0')
    {
        iLength++;
        iCnt++;
    }

    for (i=1;i<=iLength;i++)
    {
        k=0;

         for (j=1;j<=iLength;j++)
         {
             printf("%c\t",str[k]);
             k++;
         }
             printf("\n");
    }
}

int main()
{
    char str[30]={'\0'};
    int iLength=0;

    printf("Enter string: ");
    scanf("%[^'\n']s",&str);

    Pattern (str);

    return 0;
}
