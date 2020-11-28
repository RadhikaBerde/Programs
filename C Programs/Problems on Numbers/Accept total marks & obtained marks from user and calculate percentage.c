/* Write a program which accept total marks & obtained marks from user and calculate percentage.

 Input : 1000 745
 Output : 74.5%

 */

#include<stdio.h>

float percentage(int iNo1,int iNo2)
{
    float iAns=0.0;

    if((iNo1==0) ||(iNo2==0) || (iNo1<iNo2))
    {
        return 0;
    }

    iAns=(float)iNo2/(float)iNo1*100;
    return iAns;

}


int main()
{
    int iValue1=0;
    int iValue2=0;
    float iRet=0.0;

    printf("Enter total marks: \n");
    scanf("%d",&iValue1);

    printf("Enter obtained marks : \n");
    scanf("%d",&iValue2);


    iRet=percentage(iValue1,iValue2);

    printf("Percentage is: %f ",iRet);

    return 0;
}



