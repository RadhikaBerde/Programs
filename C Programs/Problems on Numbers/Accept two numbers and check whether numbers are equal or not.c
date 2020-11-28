/* Write a program which accept two numbers and check whether numbers are equal or not.

 Input : 10 10
 Output : Equal

 Input : 10 12
 Output : Not Equal

 Input : 10 -10
 Output : Not Equal
 
 */

#include<stdio.h>
typedef int BOOLEAN;
# define TRUE 1
# define FALSE 0

BOOLEAN CheckEqual(int iNo1,int iNo2)
{
        if((iNo1>iNo2) || (iNo2>iNo1))
         {
            return FALSE;
         }
        else
         {
            return TRUE;
         }

}


int main()
{
    int iValue1=0;
    int iValue2=0;
    BOOLEAN bRet=FALSE;

    printf("Enter First no: \n");
    scanf("%d",&iValue1);

    printf("Enter Second no: \n");
    scanf("%d",&iValue2);

    bRet=CheckEqual(iValue1,iValue2);

    if(bRet==TRUE)
        {
            printf("Numbers are equal ");
        }
        else
        {
            printf("Numbers are not equal");
        }

    return 0;
}


