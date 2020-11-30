/*3. Design application for school management system.

As school is primary there are 4 standards from 1 to 4. School fees of each standard is different.
For first standard fees are 8900, for second standard 12790, for third standard 21000 and for fourth standard fees are 23450.
We have to accept standard from user and display the corresponding fees.

Input : 2 Output : 12790
Input : 4 Output : 23450
Input : 6 Output : Wrong input

*/

#include<stdio.h>
#define EERVALUE -1

int SchoolFees(iStd)
{
   if((iStd<=0) || (iStd>4))
    {
        return EERVALUE;
    }
    switch(iStd)
    {
    case 1:
        return 8900;
        break;
    case 2:
        return 12790;
        break;
    case 3:
        return 21000;
        break;
    case 4:
        return 23450;
        break;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0.0;

    printf("Enter Standard:  ");
    scanf("%d",&iValue);

    if((iValue<=0) || (iValue>4))
    {
        printf("Wrong input");
        return -1;
    }

    iRet=SchoolFees(iValue);

    if(iRet==EERVALUE)
     {
        printf("invalid std");
     }

    else
    {
        printf("School fee is: %d",iRet);
    }

    return 0;
}

