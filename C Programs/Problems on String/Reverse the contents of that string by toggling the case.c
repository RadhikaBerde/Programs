/*4. Accept sing from user and reverse the contents of that string by toggling the case.

Input : “aCBdef”
Output : “FEDbcA”

*/

#include <stdio.h>

void  StrRevTogX(char *str)
{
    char temp;
    char *first,*last;
    first = str;
    last = str;

    while(*last!='\0')
    {
        if((*last>='A')&&(*last<='Z'))
        {
            *last=*last+32;
        }
       else if((*last>='a')&&(*last<='z'))
        {
            *last=*last-32;
        }
        last++;
    }
    last--;

  while(first<=last)
    {
         temp=*first;
        *first=*last;
        *last=temp;
        *first++;
        *last--;
    }
}
int main()
{
    char arr[30]={'\0'};

    printf("Enter 1st string: ");
    scanf("%[^'\n']s",arr);

    StrRevTogX(arr);

    printf("%s",arr);

    return 0;
}
