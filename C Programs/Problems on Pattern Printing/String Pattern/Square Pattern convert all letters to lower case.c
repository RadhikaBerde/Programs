/* Write a program which accept string from user and print below pattern.

Input : “Marvellous”
Output : m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s
 m a r v e l l o u s

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
        for(j=1;j<=iLength;j++)
        {
            if((str[k]>='A')&&(str[k]<='Z'))
            {
                str[k]=str[k]+32;
            }
            printf("%c\t",str[k]);
            k++;
        }
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



