/* Accept one character from user and convert case of that character.

Input : a Output : A
Input : D Output : d

*/

#include<stdio.h>

void DisplayConvert(char ch)
{
    if(ch>='A'&&ch<='Z')
     {
        ch=ch+32;
        printf("%c\n",ch);
     }

    else if(ch>='a'&&ch<='z')
     {
        ch=ch-32;
        printf("%c\n",ch);
     }
}

int main()
{
    char cValue='\0';

    printf("Enter any character: ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}

