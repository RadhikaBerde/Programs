/*Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.

Input : E Output : TRUE
Input : d Output : FALSE

*/

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChckVowel(char cAlpha)
{
        if(cAlpha == 'A' || cAlpha == 'E'|| cAlpha == 'I'|| cAlpha == 'O'|| cAlpha == 'U'|| cAlpha == 'a'|| cAlpha == 'e'|| cAlpha == 'i'|| cAlpha == 'o'|| cAlpha == 'u')
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
}

int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter any character: ");
    scanf("%c",&cValue);

    bRet=ChckVowel(cValue);

    if(bRet==FALSE)
     {
        printf("It is not vowel");
     }
    else
     {
        printf("It is vowel");
     }

    return 0;
}



