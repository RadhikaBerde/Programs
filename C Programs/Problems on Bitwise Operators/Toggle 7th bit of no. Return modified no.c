/* Write a program which accept one number from user and toggle 7th bit of that number. Return modified number.

Input : 137
Output : 201

*/

#include<stdio.h>

int ToggleBit(int iNo)
{
    int iMask=0X00000040;
    int iResult=0;
    if(iNo<0)
    {
       iNo=-iNo;
    }
    iResult=iMask^iNo;
    return iResult;
}

int main()
{
    int iNo=0;
    int iAns=0;

    printf("Enter number: ");
    scanf("%d",&iNo);

    iAns=ToggleBit(iNo);

    printf("%d",iAns);
}
