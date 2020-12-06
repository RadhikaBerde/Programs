/* Write a program which accept string from user and copy the contents of that string into another string. (Implement strncpy() function)

Input : “Marvellous Multi OS”
        10
Output : “Marvellous

Note : If third parameter is greater than the size of source string then copy whole string into destination.
*/

#include<stdio.h>

void StrlenX(char *str, char *dest,int iCnt)
{
   while((*str!= '\0')&&(iCnt!=0))
    {
       *dest = *str;
        dest++;
        str++;
        iCnt--;
    }
    *dest='\0';
}

int main()
{
    char arr[30];
    char brr[30] ;      // Static memory allocation of array
    int iCnt=0;

    printf("Enter the string: ");  //scanf("%s",arr);
    scanf("%[^'\n']s",arr);     // Accept the input till user enters enter key

    printf("Enter the no: ");
    scanf(" %d",&iCnt);

    StrlenX(arr,brr,iCnt);           // StrlenX(100) // 10

    printf("Copied string is:  %s ",brr);

    return 0;
}
