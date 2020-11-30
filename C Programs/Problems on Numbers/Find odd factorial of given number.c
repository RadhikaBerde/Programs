/* Write a program to find odd factorial of given number.

Input : 5
Output : 15 (5 * 3 * 1)

Input : -5
Output : 15 (5 * 3 * 1)

Input : 10
Output : 945 (9 * 7 * 5 * 3 * 1)

*/

#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name :  EvenFactorial
//  Input : Interger
//  Output :
//  Description : It is used to find even factorial of given number
//  Date :  9th August 2020
//
//////////////////////////////////////////////////////////////

void OddFactorial(int iNo)
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
        if(iCnt%2!=0)
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

    OddFactorial(iValue);

    return 0;
}

