/* Write a program which 2 strings from user and check whether contents of two strings are equal or not. (Implement strcmp() function).

 Input : “Marvellous Infosystems”
         “Marvellous Infosystems”
 Output : TRUE

*/

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckStrings(char arr[],char brr[])
{
    while((*arr!='\0')&&(*brr!='\0'))
     {
        if(*arr==*brr)
         {
           arr++;
           brr++;
         }
        else
         {
           break;
         }
    }

    if((*arr==*brr)||(*brr='\0'))
      {
         return TRUE ;
      }
    else
      {
         return FALSE;
      }
}

int main()
{
    char arr[30]={'\0'};
    char brr[30]={'\0'};
    BOOL bRet=FALSE;

    printf("Enter 1st string: ");
    scanf("%[^'\n']s",arr);

    printf("Enter 2nd string: ");
    scanf(" %[^'\n']s",brr);

    bRet=CheckStrings(arr,brr);

    if(bRet==TRUE)
     {
        printf("strings are equal ");
     }
    else
     {
        printf("strings are not equal ");
     }

    return 0;
}
