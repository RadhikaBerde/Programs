/* Write a program which accept string from user and copy that characters of that string into another string by converting all small characters into capital case.

Input : “Marvellous Python 2”
Output : “MARVELLOUS PYTHON 2”

*/

#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    if((src==NULL)||(dest==NULL))
     {
        return;
     }

    while(*src!='\0')
     {
        if((*src>='a') && (*src<='z'))
            {
                *dest=*src-32;
            }
        else
            {
                *dest=*src;
            }
       src++;
       dest++;
     }
}

int main()
{
    char arr[30]={'\0'};
    char brr[30]={'\0'};

    printf("Enter the string: ");  //scanf("%s",arr);
    scanf("%[^'\n']s",arr);       // Accept the input till user enters enter key

    StrCpySmall(arr,brr);

    printf("Copied string is:  %s ",brr);

    return 0;
}
