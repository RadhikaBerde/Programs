/* Write a program which 2 strings from user and check whether first N contents of two strings are equal or not. (Implement strcmp() function).
Note : If third parameter is greater than the size of second string then concat whole string after first string.

Input : “Marvellous Infosystems”
        “Marvellous Logic Building”
         10
Output : TRUE

*/

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL StrNCmpX(char *arr,char *brr,int iCnt)
{
   while((*arr!='\0')&&(*brr!='\0')&&(iCnt!=0))
    {
      if(*arr==*brr)
         {
           arr++;
           brr++;
           iCnt--;
         }
      else
         {
           break;
         }
    }

    if((*arr==*brr)||(iCnt==0))
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
    int iCnt=0;
    BOOL bRet=FALSE;

    printf("Enter 1st string: ");
    scanf("%[^'\n']s",arr);

    printf("Enter 2nd string: ");
    scanf(" %[^'\n']s",brr);

    printf("Enter Count: ");
    scanf("%d",&iCnt);

    bRet=StrNCmpX(arr,brr,iCnt);

    if(bRet==TRUE)
     {
        printf("First %d contents of two strings are equal",iCnt);
     }
    else
     {
        printf("First %d contents of two strings are NOT equal ",iCnt);
     }

    return 0;
}
