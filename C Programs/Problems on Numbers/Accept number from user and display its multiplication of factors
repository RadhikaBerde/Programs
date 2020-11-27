/*1.Write a program which accept number from user and display its multiplication of factors.

Input : 12
Output : 144 (1 * 2 * 3 * 4 * 6)

Input : 13
Output : 1 (1)

Input : 10
Output : 10 (1 * 2 * 5)

*/

#include<stdio.h>

int MultFact(iValue)
{
    int iCnt=0;
    int iAns=1;

    if(iValue==0)
        {
            return 0;
        }
    if(iValue<0)
        {
            iValue=-iValue;
        }

    for(iCnt=2;iCnt<iValue;iCnt++)
    {
        if(iValue%iCnt==0)
            {
                iAns=iAns*iCnt;
            }
    }
        return iAns;
}

int main()
{
    int iNo=0;
    int iRet=0;

    printf("Enter any number: ");
    scanf("%d",&iNo);

    iRet=MultFact(iNo);

    printf("multiplication of factors is :%d",iRet);

    return 0;
}
