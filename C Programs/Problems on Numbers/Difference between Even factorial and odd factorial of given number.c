/* Write a program which returns difference between Even factorial and odd factorial of given number.

Input : 5
Output : -7 (8 - 15)

Input : -5
Output : -7 (8 - 15)

Input : 10
Output : 2895 (3840 - 945)

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

int FactorialDiff(int iNo)
{
  int iCnt=0;
  int iEvenFact=1;
  int iOddFact=1;
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
            iEvenFact=iEvenFact*iCnt;
        }
        if(iCnt%2!=0)
        {
            iOddFact=iOddFact*iCnt;
        }
    }
    return iEvenFact-iOddFact;

}
int main()
{
    int  iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);
    printf("Factorial difference is: %d",iRet);

    return 0;
}
