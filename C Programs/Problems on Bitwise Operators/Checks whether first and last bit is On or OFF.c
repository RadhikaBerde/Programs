//  Write a program which checks whether first and last bit is On or OFF. First bit means bit number 1 and last bit means bit number 32.

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(int iNo)
{
    int iMask=0X80000001;
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
        printf("Bit is ON");
    }
    else
    {
        printf("Bit is OFF");
    }
}
