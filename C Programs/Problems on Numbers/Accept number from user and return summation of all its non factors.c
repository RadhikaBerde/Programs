/* Write a program which accept number from user and return summation of all its non factors.

Input : 12
Output : 50

Input : 10
Output : 37

*/

#include<stdio.h>

int DiplaySumofNonFactors(iValue)
{
    int iCnt=0;
    int iSum=0;

    if(iValue==0)
    {
      return 0;
    }
       if(iValue<0)
    {
       iValue=-iValue;
    }

    for(iCnt=1;iCnt<iValue;iCnt++)
        {
            if(iValue%iCnt!=0)
            {
                iSum=iSum+iCnt;
            }
        }

        return iSum;
}

int main()
{
    int iNo=0;
    int iRet=0;

    printf("Enter any number: ");
    scanf("%d",&iNo);

    iRet=DiplaySumofNonFactors(iNo);

    printf("Summation of all its non factors is: %d\n",iRet);

    return 0;
}

