/*4.Write a program which accept number from user and return multiplication of all digits.

Input : 2395
Output : 270

Input : 1018
Output : 8

Input : 9440
Output : 144

Input : 922432
Output : 864

*/

#include<stdio.h>

int Multiply(int iNo)
{
    int iMult=1;
    int iDigit=0;

    if(iNo==0)
    {
        return 0;
    }
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit!=0)
        {
            iMult=iMult*iDigit;
        }
        iNo=iNo/10;
    }

    return iMult;
}

int main()
{
    int iNo=0;
    int iRet=0;

    printf("Enter the no: ");
    scanf("%d",&iNo);

    iRet=Multiply(iNo);

    printf("Multiplication of all digits is: %d",iRet);
    return 0;

}

