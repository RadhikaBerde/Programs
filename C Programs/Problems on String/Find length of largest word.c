/* Write a program which accept string from user and return length of largest word.

Input : “Marvellous Multi OS Infosystems”
Output : 11

*/

#include <stdio.h>

void WordCount(char arr[])
{
    int iCnt=0;
    int iTemp=0;
    int i=0;

    while(arr[i]!='\0')
    {
       if(arr[i]!=' ')
         {
            iCnt++;
         }
        else
         {
            if(arr[i]==' ')
              {
                if(iTemp<iCnt)
                    {
                       iTemp=iCnt;
                    }
                  iCnt=0;
                }
        }
        i++;
    }

    if(arr[i]=='\0')
    {
      if(iTemp<iCnt)
        {
            iTemp=iCnt;
        }
    }

    printf("Length of largest word is: %d",iTemp);
}

int main()
{
    char arr[30]={'\0'};

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    WordCount(arr);

    return 0;
}

