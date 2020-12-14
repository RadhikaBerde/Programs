/* Accept string from user and check whether the string is palindrome or not without considering its case.

Input : “1abccBA1”
Output : TRUE

*/

#include<stdio.h>

void Palindrome(char str[])
{
  int i=0;
  int iCnt=0;
  int iStart=0;
  int iEnd=0;
  int flag=0;

  while(str[i]!='\0')
  {
      iEnd++;
      i++;
  }
  iEnd--;

   while(iStart<iEnd)
    {
        if(str[iStart]==str[iEnd])
        {
            iStart++;
            iEnd--;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}

int main()
{
    char str[50];

    printf("Enter string: ");
    scanf("%[^'\n']s",&str);

    Palindrome(str);

    return 0;
}
