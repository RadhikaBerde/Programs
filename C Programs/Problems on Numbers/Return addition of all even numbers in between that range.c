/* Write a program which accept range from user and return addition of all even numbers in between that range. (Range should contains positive numbers only)

Input : 23 30
Output : 108

Input : 10 18
Output : 70

Input : -10 2
Output : Invalid range

Input : 90 18
Output : Invalid range

*/

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name :   RangeSumEven
//  Input : Interger
//  Output :  None
//  Description :   It is used to Display addition of all even numbers in between that range
//  Date :  9th August 2020
//
//////////////////////////////////////////////////////////////

void RangeSum(int iStart , int iEnd)
{
    int iCnt=0;
    int iSum=0;

    if((iStart<0) || (iEnd<0) || (iStart>iEnd))
    {
        printf("Invalid Range");
        return;
    }
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
     {
        if(iCnt%2==0)
            {
              iSum=iSum+iCnt;
            }
    }

    printf("%d",iSum);
}

int main()
{
    int  iValue1 = 0;
    int  iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);
    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    RangeSum(iValue1,iValue2);

    return 0;
}

