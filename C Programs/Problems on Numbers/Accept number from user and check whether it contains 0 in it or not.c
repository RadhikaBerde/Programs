/* Write a program which accept number from user and check whether it contains 0 in it or not.

Input : 2395
Output : There is no Zero

Input : 1018
Output : It Contains Zero

Input : 9000
Output : It Contains Zero

Input : 10687
Output : It Contains Zero

*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckZero(int iNo)
{
    int iDigit=0;

    while(iNo!=0)
     {
        iDigit=iNo%10;
        if(iDigit==0)
         {
            break;
         }
         iNo=iNo/10;

    }
    if(iDigit==0)
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
    int iValue1=0;
    BOOL bRet=FALSE;

    printf("Enter no: \n");
    scanf("%d",&iValue1);

    bRet=CheckZero(iValue1);

    if(bRet==TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("It do not contains  zero");
    }

    return 0;
}



