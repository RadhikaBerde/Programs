/* Write a program to find even factorial of given number.

Input : 5
Output : 8 (4 * 2)

Input : -5
Output : 8 (4 * 2)

Input : 10
Output : 3840 (10 * 8 * 6 * 4 * 2)

*/

#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name :  EvenFactorial
//  Input : Interger
//  Output :  Interger
//  Description : It is used to find even factorial of given number
//  Date :  9th August 2020
//
//////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt=0;
    int iMult=1;

    if(iNo==0)
    {
       return;
    }
    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==0)
        {
            iMult=iMult*iCnt;
        }
    }

    printf("%d",iMult);
}

int main()
{
    int  iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    EvenFactorial(iValue);

    return 0;
}

