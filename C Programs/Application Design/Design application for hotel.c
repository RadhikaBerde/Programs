/*1. Design application for hotel. According to the management team of hotel they are giving discount on total bill amount of customer.

If bill bill amount is less than 500 then there is no discount , if bill amount is less than 1500 and more than 500 they give 10% discount.
And if the bill amount is more than 1500 then they give 15% discount.
Our application should accept total bill amount and depends on the discount policy we have to return the amount after applying discount.

Input : 1200 Output : 1080
Input : 290 Output : 290
Input : 3700 Output : 3145

*/

#include<stdio.h>
#define EERVALUE -1

float CalculateBill(int iAmount)
{
   float fDiscount=0.0;

    if(iAmount==0)
    {
        return EERVALUE;
    }
       else if(iAmount<500)
       {
           return iAmount;
       }
        else if((iAmount>500) && (iAmount<1500))
            {
                fDiscount=(float)iAmount/100*10;
            }
                else
                {
                    fDiscount=(float)iAmount/100*15;
                }
                return iAmount-fDiscount;
}


int main()
{
    int iValue = 0;
    float fRet = 0.0;

    printf("Enter number amount of  bill :  ");
    scanf("%d",&iValue);

    fRet=CalculateBill(iValue);

    if(fRet==EERVALUE)
     {
        printf("Amount is invalid");
     }
    else
     {
        printf("Amount of  bill after applying discount is: %f\n",fRet);
     }
    return 0;
}
