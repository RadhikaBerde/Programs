// 3. Write a program which checks whether 7th & 15th & 21st , 28th bit is On or OFF.

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckBit(int iNo)
{
    int iMask=0X08104040;
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
