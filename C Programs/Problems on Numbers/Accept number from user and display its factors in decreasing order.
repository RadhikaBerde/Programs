/*Write a program which accept number from user and display its factors in decreasing order.

Input : 12
Output : 6 4 3 2 1

Input : 13
Output : 1

Input : 10
Output : 5 2 1

*/

#include<stdio.h>

void FactRev(iValue)
{
    int iCnt=0;

    if(iValue==0)
        {
            return 0;
        }
    if(iValue<0)
        {
            iValue=-iValue;
        }

    for(iCnt=iValue-1;iCnt>=1;iCnt--)
    {
        if(iValue%iCnt==0)
        {
            printf("%d\t",iCnt);
        }

    }
}

int main()
{
    int iNo=0;

    printf("Enter any number: ");
    scanf("%d",&iNo);

    FactRev(iNo);

    return 0;
}

