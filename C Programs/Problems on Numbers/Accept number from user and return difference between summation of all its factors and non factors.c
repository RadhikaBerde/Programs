/* Write a program which accept number from user and return difference between summation of all its factors and non factors.

Input : 12
Output : -34 (16 - 50)

Input : 10
Output : -29 (8 - 37)

*/

#include<stdio.h>

int iDiff(int iNo)
{
    int iRet=0;
    int iReta=0;
    int iAns=0;

    if(iNo==0)
    {
      return 0;
    }
       if(iNo<0)
    {
       iNo=-iNo;
    }

    iReta=DiplaySumofFactors(iNo);
    iRet=DiplaySumofNonFactors(iNo);
    iAns=iReta-iRet;

    return iAns;
}

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

int DiplaySumofFactors(iValue)
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
            if(iValue%iCnt==0)
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

    iRet=iDiff(iNo);
    printf("Difference between summation of all its factors and non factors is: %d\n",iRet);

    return 0;
}

