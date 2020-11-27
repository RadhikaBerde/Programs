/* Write a program which accept one number from user and check whether that number is greater than 100 or not.

Input : 101
Output : Greater

Input : 39
Output : Smaller

*/

#include<stdio.h>
typedef int BOOL;
# define TRUE 1
# define FALSE 0


/////////////////////////////////////////////////////////////
//
//  Function name :   CheckGreater
//  Input : Integer
//  Output :  BOOLEAN
//  Description :   It is used to CHECK WHETHER THAT NUBER IS GREATER FROM 100 or not
//  Author : Radhika Rajkumar Berde
//  Date :  10th August 2020
//
/////////////////////////////////////////////////////////////

BOOL CheckGreater(int iNo)
{
            if(iNo>100)
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
    BOOL bRet=FALSE;

    printf("Enter any no: ");
    scanf("%d",&iValue);

    bRet=CheckGreater(iValue);

    if(bRet==TRUE)
        {
            printf("No is greater");
        }
    else
        {
            printf("No is smaller ");
        }

    return 0;
}



