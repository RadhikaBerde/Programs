/* Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9))

Input : 10
Output : -12.2222 (10 - 32) * (5/9)

Input : 34
Output : 1.11111 (34 - 32) * (5/9)    

*/

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name :  FhtoCs
//  Input : float
//  Output :  double
//  Description :   It is used to convert temperature in Fahrenheit to celsius
//  Date :  8th August 2020
//
//////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
   double dCelsius=0.0;
   dCelsius=(fTemp-32)*5/9;
   return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet=0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);
    printf("Temperature in celsius is: %lf DEG C\n",dRet);

    return 0;
}

