/* Write a program which accept one number and position from user and off that bit. Return modified number.

Input : 10 2
Output : 8

*/

#include<stdio.h>

int OffBit(int iNo,int iPos)
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
    iResult=iMask^iNo;
}

int main()
{
    int iNo=0;
    int iPos=0;
    int iAns=0;

    printf("Enter number: ");
    scanf("%d",&iNo);
    printf("Enter Position: ");
    scanf("%d",&iPos);

    iAns=OffBit(iNo,iPos);
    printf("Modified number is: %d",iAns);

    return 0;
}
