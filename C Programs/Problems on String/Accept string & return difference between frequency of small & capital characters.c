/* Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

Input : “MarvellouS”
Output : 6 (8-2)

*/

#include<stdio.h>

int Difference(char *str)
{

    int iCapitalCnt=0;
    int iSmallCnt=0;

    while(*str!='\0')
    {
        if((*str>='A') && (*str<='Z'))
          {
             iCapitalCnt++;
          }
        else if((*str>='a') && (*str<='z'))
         {
             iSmallCnt++;
         }
        str++;
    }

    return iSmallCnt-iCapitalCnt;
}

int main()
{
    char arr[30];
    int iRet = 0;
    int iCnt=0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("Number of capital characters are: %d",iRet);

    return 0;
}
