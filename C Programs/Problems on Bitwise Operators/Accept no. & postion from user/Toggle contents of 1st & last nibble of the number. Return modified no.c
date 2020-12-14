// Write a program which accept one number from user and toggle contents of first and last nibble of the number. Return modified number. (Nibble is a group of four bits)

#include<stdio.h>

int Toggle(int iNo)
{
    int iMask=0XF000000F;
    int iResult=0;

    iResult=iNo^iMask;

    return iResult;
}

int main()
{
    int iNo=0;
    int iRet=0;

    printf("Enter no: ");
    scanf("%d",&iNo);

    iRet=Toggle(iNo);

    printf("Modified no. is: %d",iRet);

    return 0;
}

