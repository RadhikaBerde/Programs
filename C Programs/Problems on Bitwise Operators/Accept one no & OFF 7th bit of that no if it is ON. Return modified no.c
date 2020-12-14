/* Write a program which accept one number from user and off 7th bit of that number if it is on. Return modified number.

Input : 79
Output : 15

*/

#include<stdio.h>

int OffBit(int iNo)
{
    int iMask=0X00000040;
    int iResult=0;

    iResult=iMask^iNo;

    return iResult;
}

int main()
{
    int iNo=0;
    int iAns=0;

    printf("Enter number: ");
    scanf("%d",&iNo);

    iAns=OffBit(iNo);

    printf("%d",iAns);
    return 0;
}
