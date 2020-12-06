/* Write a program which accept string from user and check whether it contains vowels in it or not.

Input : “marvellous”
Output : TRUE

Input : “Demo”
Output : TRUE

Input : “xyz”
Output : FALSE

*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char str[])
{

    int i=0;
    while(str[i]!='\0')
     {
        if((str[i]=='A') || (str[i]=='a') || (str[i]=='E') || (str[i]=='e') || (str[i]=='I') || (str[i]=='i') || (str[i]=='O') || (str[i]=='o') || (str[i]=='U') || (str[i]=='u'))
          {
             return TRUE;
          }
        i++;
    }
}

int main()
{
    char arr[30];
    BOOL bRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
      {
         printf("Contains Vowel");
      }
    else
      {
         printf("There is no Vowel");
      }

    return 0;
}
