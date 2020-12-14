// 4. Write a program which checks whether 7th & 8th & 9th bit is On or OFF.

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(int iValue)
{
    int iMask=0X000001C0;
    int iRet=0;

    iRet=iMask&iValue;

    if(iRet==iMask)
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
    int iAns=0;

    printf("Enter number: ");
    scanf("%d",&iNo);

    iAns=CheckBit(iNo);

    if(iAns==TRUE)
     {
        printf("Bit is ON");
     }
    else
     {
        printf("Bit is OFF");
     }
}
