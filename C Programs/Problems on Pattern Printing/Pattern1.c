/* Write a program which accept number from user and display below pattern.

Input : 5
Output : * * * * * # # # # #

Input : 6
Output : * * * * * * # # # # # # #

Input : -5
Output : * * * * * # # # # #

Input : 2
Output : * * # #           

*/

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name :  Display
//  Input : Interger
//  Output :  None
//  Description :   It is used to Display display pattern
//  Date :  9th August 2020
//
//////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt=0;

    if(iNo==0)
    {
        printf("Invalid Input");
        return;
    }
    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=iNo;iCnt++)
        {
                printf(" * ");
        }

    for(iCnt=1;iCnt<=iNo;iCnt++)
        {
                printf(" # ");
        }
}

int main()
{
    int  iValue = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}


