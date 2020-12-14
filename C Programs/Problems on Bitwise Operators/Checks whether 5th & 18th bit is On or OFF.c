//  Write a program which checks whether 5th & 18th bit is On or OFF.

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(int iNo)
{
    int iMask=0X00020010;
    int iResult=0;

    iResult=iNo&iMask;

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
    BOOL bAns=0;

    printf("Enter number: ");
    scanf("%d",&iNo);

    iAns=CheckBit(iNo);

    if(iAns==TRUE)
     {
        printf("5th & 18th Bit is ON");
     }
    else
     {
        printf("One of the bit is OFF or all bits are OFF");
     }
   return 0;
}
