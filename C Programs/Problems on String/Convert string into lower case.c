/* Write a program which accept string from user and convert it into lower case.

Input : “Marvellous Multi OS”
Output : marvellous multi os

*/

#include<stdio.h>

 /*using array
 void strlwrx(char str[])
{
    int i=0;
    char string[30];
    while(str[i]!='\0')
    {
            if((str[i]>='A') && (str[i]<='Z'))
                {
                    string[i]=str[i]+32;
                }

            i++;
    }
    string[i]='\0';
     printf("%s\n",string);
}
*/

void strlwrx(char *str)
{
    while(*str!='\0')
    {
            if((*str>='A') && (*str<='Z'))
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

    strlwrx(arr);

    printf("Modified string is: %s",arr);

    return 0;
}
