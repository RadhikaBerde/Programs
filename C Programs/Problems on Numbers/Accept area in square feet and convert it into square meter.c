/* Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter)

Input : 5
Output : 0.464515

Input : 7
Output : 0.650321

*/

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name :  KMtoMeter
//  Input : integer
//  Output :  integer
//  Description :   It is used to convert km to meters
//  Date :  8th August 2020
//
//////////////////////////////////////////////////////////////

double  SquareMeter(int iNo)
{
    double dSquareMeter=0.0;

    if(iNo==0)
    {
        return 0;
    }

    dSquareMeter=iNo*0.0929;
    return dSquareMeter;

}
int main()
{
    int iValue = 0;
    double dRet=0;

    printf("Enter area in square feet: ");
    scanf("%d",&iValue);

    dRet= SquareMeter(iValue);
    printf("Area in square meter is: %lf",dRet);

    return 0;
}
