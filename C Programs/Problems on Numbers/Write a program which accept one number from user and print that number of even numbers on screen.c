/*1.Write a program which accept one number from user and print that number of even numbers on screen.

Input : 7
Output: 2 4 6 8 10 12 14

*/

#include<stdio.h>

void Even(int iNo)
{

    int iEven=0;
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iEven=iEven+2;
        printf("%d\t",iEven);
    }
}
int main()

{
    int iValue=0;

    printf("Enter no.: ");
    scanf("%d",&iValue);

    Even(iValue);

    return 0;
}
