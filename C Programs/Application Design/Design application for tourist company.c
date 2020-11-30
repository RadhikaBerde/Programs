/*4. We have to design application for tourist company.

Tourist company provides cars on rent.Depends on the running of car they apply rent.
If running is less than 100 kilometres then they charge 25 rupees per kilometre .
And if running is more than 100 kilometres then they apply 15 rupees per kilometre after 100 kilometres.
We have to accept number of kilometres from user and return the estimated rent.

Input : 73 Output : 1825
Input : 132 Output : 2980
Input : 189 Output : 3835 */

#include<stdio.h>

int TouristBill(int iKilometer)
{
    int iAns=0;
    if(iKilometer==0)
    {
        return 0;
    }
    if(iKilometer<0)
    {
        iKilometer=-iKilometer;
    }
    if(iKilometer<100)
    {
        iAns=iKilometer*25;
    }
      else if(iKilometer>100)
      {
              iAns=(iKilometer-100)*15+100*25;
      }
      return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0.0;

    printf("Enter running km:  ");
    scanf("%d",&iValue);

    iRet=TouristBill(iValue);

    printf("Tourist Bill is: %d",iRet);
    return 0;
}
