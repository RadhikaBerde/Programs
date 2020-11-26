/*Accept two numbers from user and display first number in second number of times.

Input : 12 5
Output : 12 12 12 12 12

Input : -2 3
Output : -2 -2 -2

Input : 21 -3
Output : 21 21 21

Input : -2 0
Output :
*/

#include<stdio.h>

int Display(int iNo1,int iNo2)
  {
    int i=0;

    for(i=1;i<=iNo2;i++)
    {
        printf("%d\t",iNo1);
    }
 }
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter first no.: ");
    scanf("%d",&iValue1);

    printf("Enter second no.: ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}




