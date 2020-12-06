/* Write a program which accept string from user and copy that characters of that string into another string by toggling the case.

Input : “Marvellous Python 2”
Output : “mARVELLOUS pYTHON 2”

*/

#include<stdio.h>

void  StrCpyToggle(char *src, char *dest)
{
   if((src==NULL)||(dest==NULL))
    {
        return;
    }

  while(*src!='\0')
    {
        if((*src>='A') && (*src<='Z'))
            {
                *dest=*src+32;
            }
        else if((*src>='a') && (*src<='z'))
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

    StrCpyToggle(arr,brr);

    printf("Copied string is:  %s ",brr);

    return 0;
}
