/* Write a program which 2 strings from user and concat second string after first string. (Implement strcat() function).

Input : “Marvellous Infosystems”
        “Logic Building”
Output : “Marvellous Infosystems Logic Building”

*/

#include<stdio.h>

void StrCatX(char src[] , char dest[])
{
    int iLength=0;
    int j=0;

    while(src[iLength] !='\0') // Traverse first string till end
     {
        iLength++;
     }

    src[iLength]=' ';
    iLength++;

    while(dest[j] != '\0') // Copy contents of destination in source
     {
        src[iLength]=dest[j];
        iLength++;
        j++;
    }
    src[iLength]='\0';
}

int main()
{
    char arr[50];
    char brr[30];

    printf("Enter 1st string: ");
    scanf("%[^'\n']s", arr);

    printf("Enter 2nd string: ");
    scanf(" %[^'\n]s",brr);

    StrCatX(arr,brr);
    printf("String after concat: %s", arr);

    return 0;
}
