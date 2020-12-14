// Write a program which checks whether 15th bit is On or OFF.

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(int iNo)
{
    int iMask=0X0004000;
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
    int iAns=0;

    printf("Enter number: ");
    scanf("%d",&iNo);

    iAns=CheckBit(iNo);

    if(iAns==TRUE)
     {
        printf("15th Bit is ON");
     }
    else
     {
        printf("15th Bit is OFF");
     }
}
