/*3.Write a program which accept string from user and accept one character. Return index of first occurrence of that character.

Input : “Marvellous Multi OS”
 M
Output : 0

Input : “Marvellous Multi OS”
 W
Output : -1

Input : “Marvellous Multi OS”
 e
Output : 4

*/

#include<stdio.h>

int FirstChar(char str[], char ch)
{
    int i=0;

    if((str==NULL)|| (ch=='\0'))
    {
        return -1;
    }

    while(str[i]!='\0')
    {
      if(str[i]==ch)
        {
           break;
        }
      i++;
    }

    if(str[i]==ch)
     {
        return i;
     }
    else
     {
        return -1;
     }
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^’\n’]s",arr);

    printf("Enter the character: ");
    scanf(" %c",&cValue);

    iRet =  FirstChar(arr, cValue);
    if(iRet==-1)
     {
        printf("Character not found");
     }
    else
     {
        printf("Character location is: %d",iRet);
     }

     return 0;
}
