/*1. Write a program which accept string from user and copy that characters of that string into another string in reverse order.

Input : “Marvellous Python”
Output : “nohtyP suollevraM”

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
        str++;
     }
    str--;

    while(*str!= '\0')
     {
        *dest = *str;
         dest++;
         str--;
     }
    *dest='\0';
}

int main()
{
    char arr[30]={'\0'};
    char brr[30]={'\0'};      // Empty string

    printf("Enter the string: ");  //scanf("%s",arr);
    scanf("%[^'\n']s",arr);       // Accept the input till user enerets enter key

    StrlenX(arr,brr);              // StrlenX(100) // 10
    printf("Copied string is:  %s ",brr);   // nohtyP suollevraM

    return 0;
}
