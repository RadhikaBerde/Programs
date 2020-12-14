/* Write a program which accept one number from user and on its first 4 bits. Return modified number.

Input : 73
Output : 79

*/
#include<stdio.h>

int TurnONBit(int iNo)
{
    int iMask=0X0000000F;
    int iResult=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    iResult=iMask|iNo;
    return iResult;
}

int main()
{
    int iNo=0;
    int iAns=0;

    printf("Enter number: ");
    scanf("%d",&iNo);

    iAns=TurnONBit(iNo);

    printf("%d",iAns);
}
