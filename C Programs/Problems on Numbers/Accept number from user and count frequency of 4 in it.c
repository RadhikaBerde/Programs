/* Write a program which accept number from user and count frequency of 4 in it.

Input : 2395
Output : 0

Input : 1018
Output : 0

Input : 9440
Output : 2

Input : 922432
Output : 1

*/

#include<stdio.h>

int CheckTwo(int iNo)
{
    int iDigit=0;
    int iCnt=0;

    if(iNo<0)
       {
           iNo=-iNo;
       }

    while(iNo!=0)
   {
        iDigit=iNo%10;
           if(iDigit==4)
           {
               iCnt++;
           }
           iNo=iNo/10;
    }
    return iCnt;

}


int main()
{
    int iValue1=0;
    int iRet=0;

    printf("Enter no: \n");
    scanf("%d",&iValue1);

    iRet=CheckTwo(iValue1);

    printf("Frequency of 4 is: %d",iRet);

    return 0;
}
