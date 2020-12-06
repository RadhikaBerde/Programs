/* Write a program which accept string from user and accept one character. Return frequency of that character.

Input : “Marvellous Multi OS”
 M
Output : 2

Input : “Marvellous Multi OS”
 W
Output : 0

*/

#include<stdio.h>

int CountChar(char str[],char ch)
{
    int iCnt=0;
    int i=0;

    while(str[i]!='\0')
     {
        if(str[i]==ch)
          {
            iCnt++;
          }
        i++;
    }
    return iCnt;
}

int main()
{
    char arr[30];
    char cValue = '\0';
    int iRet = 0;

    printf("Please enter the string\n");
    scanf("%[^'\n']s",arr);

    printf("Please enter the character\n");
    scanf(" %c",&cValue);

    iRet = CountChar(arr,cValue);

    printf("frequency of character is : %d\n",iRet);

    return 0;
}
