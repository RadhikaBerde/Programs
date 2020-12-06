/* Write a program which accept string from user and toggle the case.

Input : “Marvellous Multi OS”
Output : mARVELLOUS mULTI os

*/

#include<stdio.h>

 void strtogglex(char *str)
{
    while(*str!='\0')
    {
        if((*str>='a') && (*str<='z'))
            {
                *str=*str-32;
            }
        else if((*str>='A') && (*str<='Z'))
            {
                *str=*str+32;
            }

            str++;
    }
    *str='\0';
}

int main()
{
    char arr[30];

    printf("Enter string: \n");
    scanf("%[^'\n']s",arr);

    strtogglex(arr);

    printf("Modified string is: %s\t",arr);

    return 0;
}
