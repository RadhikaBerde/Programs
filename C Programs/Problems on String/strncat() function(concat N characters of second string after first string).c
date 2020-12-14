/* Write a program which accepts 2 strings from user and concat N characters of second string after first string.Value of N should be accepted from user. (Implement strncat() function).
Note : If third parameter is greater than the size of second string then concat whole string after first string.

Input : “Marvellous Infosystems”
        “Logic Building”
         5
Output : “Marvellous Infosystems Logic”

*/

#include <stdio.h>

void CountOne(char arr[],char brr[],int iCnt)
{
    int i=0;
    int iLength=0;

    while(arr[iLength]!='\0')
    {
        iLength++;
    }
     arr[iLength]=' ';
     iLength++;

   while((brr[i]!='\0')&&(iCnt!=0))
     {
         arr[iLength]=brr[i];
         iLength++;
         i++;
         iCnt--;
     }
}

int main()
{
    char arr[30]={'\0'};
    char brr[30]={'\0'};
    int iCnt=0;

    printf("Enter 1st string: ");
    scanf("%[^'\n']s",arr);

    printf("Enter 2nd string: ");
    scanf(" %[^'\n']s",brr);

    printf("Enter count: ");
    scanf("%d",&iCnt);

    CountOne(arr,brr,iCnt);

    printf("String after concatation: %s",arr);

    return 0;
}
