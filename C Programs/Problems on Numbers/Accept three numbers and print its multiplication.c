/* Write a program which accept three numbers and print its multiplication.

 Input : 5 4 7
 Output : 140

 Input : 5 0 7
 Output : 35

 Input : 5 0 0
 Output : 5

 Input : 0 0 0
 Output : 0

 */


#include<stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{
    int iAns=0;

    if(iNo1&&iNo2&&iNo3!=0)
    {
        iAns=iNo1*iNo2*iNo3;
    }
    else if((iNo1==0)&&(iNo2==0))
    {
        iAns=iNo3;
    }
    else if((iNo1==0)&&(iNo3==0))
    {
        iAns=iNo2;
    }
    else if((iNo2==0)&&(iNo3==0))
    {
        iAns=iNo1;
    }
    else if(iNo1==0)
    {
        iAns=iNo2*iNo3;
    }
    else if(iNo2==0)
    {
        iAns=iNo1*iNo3;
    }
   else if(iNo3==0)
    {
        iAns=iNo1*iNo2;
    }
    return iAns;

}


int main()
{
    int iValue1=0;
    int iValue2=0;
    int iValue3=0;
    int iRet=0;

    printf("Enter First no: \n");
    scanf("%d",&iValue1);

    printf("Enter Second no: \n");
    scanf("%d",&iValue2);

    printf("Enter Third no: \n");
    scanf("%d",&iValue3);

    iRet=Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication of numbers is: %d",iRet);

    return 0;
}



