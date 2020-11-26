Accept one number from user and print that number of * on screen (using while loop).

#include<stdio.h>

void Accept(int iNo)
    {

        while(iNo>0)
        {
           printf("*");
           iNo--;


        }

    }

int main()
{

    int iValue=0;

    printf("Enter any no.: ");
    scanf("%d",&iValue);
    Accept(iValue);

    return 0;

}

