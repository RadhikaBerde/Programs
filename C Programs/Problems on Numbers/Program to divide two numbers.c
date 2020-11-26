#include<stdio.h>

float Divide (int iNo1, int iNo2)
 {
     float iAns = 0;

    if(iNo2>iNo1)
    {
        return -1;
    }
  iAns = (float) iNo1 / iNo2;
  return iAns;
 }

int main()
 {
      int iValue1 = 0;
      int iValue2 = 0;
      float iRet = 0;

      printf("Enter First number: \n");
      scanf("%d",&iValue1);

      printf("Enter First number: \n");
      scanf("%d",&iValue2);

      iRet = Divide(iValue1,iValue2);

      if(iRet==-1)
      {
          printf("Invalid Input\n");
      }
      else
      {
          printf("Division is: %f",iRet);
      }

      return 0;

 }
