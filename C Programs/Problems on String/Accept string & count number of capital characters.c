/* Write a program which accept string from user and count number of capital characters.

Input : “Marvellous Multi OS”
Output : 4

*/

#include<stdio.h>

int CountCapital(char *str)
{

    int iCnt=0;

    while(*str!='\0')
    {
            if((*str>='A') && (*str<='Z'))
            {
                iCnt++;
            }
            str++;
    }
     return iCnt;
}

int main()
{
    char arr[30];
    int iRet = 0;
    int iCnt=0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("Number of capital characters are: %d",iRet);

    return 0;
}
