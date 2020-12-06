/* Write a program which accept string from user and copy that characters of that string into another string by removing all white spaces.

Input : “Marvel lous Pyth on”
Output : “MarvellousPython”

*/

#include<stdio.h>

void StrlenX(char *str, char *dest)
{
    if((str==NULL)||(dest==NULL))
      {
        return;
      }

    while(*str!= '\0')
     {
        if(*str!=' ')
            {
                *dest=*str;
                 dest++;
            }
        str++;
     }
      *dest='\0';
}

int main()
{
    char arr[30]={'\0'};
    char brr[30]={'\0'};

    printf("Enter the string: ");  //scanf("%s",arr);
    scanf("%[^'\n']s",arr);        // Accept the input till user enerets enter key

    StrlenX(arr,brr);
    printf("Copied string is:  %s ",brr); // MarvellousPython

    return 0;
}
