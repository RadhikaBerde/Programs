/* Write a program which accept one number from user and off 7th and 10th bit of that number. Return modified number.

Input : 577
Output : 1

*/

#include<stdio.h>

int OffBit(int iNo)
{
    int iMask=0X00000240;
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

    iAns=OffBit(iNo);

    printf("%d",iAns);
}
