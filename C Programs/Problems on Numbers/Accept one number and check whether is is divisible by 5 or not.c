//Accept one number and check whether is is divisible by 5 or not.

#include<stdio.h>

typedef int BOOLEAN;
#define TRUE 1
#define FALSE 0

int Check(int iNo)

  {
      int iAns=0;

      iAns=iNo%5;

      if(iAns==0)
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
    int iValue=0;
    BOOLEAN bRet=FALSE;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    bRet=Check(iValue);

    if (bRet==TRUE)
    {
        printf("No is divisible by 5");
    }
else
    {
        printf("No is not divisible by 5");
    }
        return 0;
}
