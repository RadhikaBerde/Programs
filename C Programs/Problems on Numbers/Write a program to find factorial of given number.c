/*Write a program to find factorial of given number.

Input : 5
Output : 120 (5 * 4 * 3 * 2 * 1)

Input : -5
Output : 120 (5 * 4 * 3 * 2 * 1)

Input : 4
Output : 24 (4 * 3 * 2 * 1)

*/

#include<stdio.h>

int Factorial(int iNo)
  {
      int iCnt = 0;
      int iMult = 1;

      if(iNo==0)
      {
            return 0;
      }
      if(iNo<0)
      {
            iNo=-iNo;
      }
      for(iCnt=iNo;iCnt>=1;iCnt--)
      {
          iMult=iMult*iCnt;
      }
      return iMult;
  }

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);
    printf("Factorial is: %d",iRet);

    return 0;
}


