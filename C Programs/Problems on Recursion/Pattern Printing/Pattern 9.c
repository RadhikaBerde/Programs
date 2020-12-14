/* Write a recursive program which display below pattern.

Input : 6
Output : A B C D E F

*/

#include<stdio.h>

void Display(int iNo)
{
   static char ch='A';
   int i=0;

    if(iNo>0)
    {
        printf("%c\t",ch);
        ch++;
        iNo--;
        Display(iNo);
    }
}

int main()
{
    int iValue=0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
