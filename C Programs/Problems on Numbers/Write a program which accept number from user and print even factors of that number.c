/* Write a program which accept number from user and print even factors of that number.

Input : 24
Output: 2 4 6 8 12

*/

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt=0;

    if(iNo==0)
        {
            return 0;
        }

    if(iNo<0)
        {
            iNo=-iNo;
        }

    for(iCnt=1;iCnt<iNo;iCnt++)
        {
          if((iNo%iCnt==0)&&(iCnt%2==0))
            {
                printf("%d\n",iCnt);
            }
        }
}

int main()
{
    int iValue=0;

    printf("Enter any number: ");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}



