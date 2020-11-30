/* Write a program which accept distance in kilometre and convert it into meter. (1
kilometre = 1000 Meter)

Input : 5
Output : 5000

Input : 12
Output : 12000

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

int KMtoMeter(int iNo)
{
    int iMeter=0;
    if(iNo==0)
    {
        return 0;
    }
    iMeter=iNo*1000;
    return iMeter;

}
int main()
{
    int iValue = 0;
    int iRet=0;

    printf("Enter distance in km: ");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);
    printf("Distance in meters is: %d Meter",iRet);

    return 0;
}
