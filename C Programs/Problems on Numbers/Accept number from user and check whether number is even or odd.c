// Accept number from user and check whether number is even or odd.

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0


BOOL ChkEvenOdd(int iNo)
 {
    int iAns=0;
    iAns=iNo%2;

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
    BOOL bRet=FALSE;

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet = ChkEvenOdd(iValue);

    if (bRet==TRUE)
        {
          printf("No is Even");
        }
    else
        {
          printf("No is Odd");
        }

    return 0;

}



