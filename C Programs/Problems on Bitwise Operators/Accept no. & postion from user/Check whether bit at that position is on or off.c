/* Write a program which accept one number and position from user and check whether bit at that position is on or off. If bit is one return TURE otherwise return FALSE.

Input : 10 2
Output : TRUE

*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(int iNo,int iPos)
{
    int iMask=0X00000001;
    int iResult=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    if((iPos<0)||(iPos>32))
    {
        return 0;
    }

    iMask=iMask<<(iPos-1);
    iResult=iMask&iNo;

    if(iResult==iMask)
     {
        return TRUE;
     }
    else
     {
        return FALSE;
     }
}

int main()
{
    int iNo=0;
    int iPos=0;
    BOOL bAns=0;

    printf("Enter number: ");
    scanf("%d",&iNo);
    printf("Enter Position: ");
    scanf("%d",&iPos);

    bAns=ChkBit(iNo,iPos);
    if(bAns==TRUE)
    {
        printf("BIT is ON");
    }
    else
    {
        printf("BIT is OFF");
    }
}
