/* 1.Write a program which accept string from user and copy the contents of that string into another string. (Implement strcpy() function)

Input : “Marvellous Multi OS”
Output : “Marvellous Multi OS” in another string

*/

#include<stdio.h>

void StrlenX(char *str, char *dest)
{
   while(*str!= '\0')
    {
     *dest = *str;
      str++;
      dest++;
    }
    *dest='\0';
}

int main()
{
    char arr[30];
    char brr[30] ;      // Static memory allocation of array

    printf("Enter the string: ");  //scanf("%s",arr);
    scanf("%[^'\n']s",arr);     // Accept the input till user enters enter key

    StrlenX(arr,brr);           // StrlenX(100) // 10

    printf("Copied string is:  %s ",brr);

    return 0;
}
