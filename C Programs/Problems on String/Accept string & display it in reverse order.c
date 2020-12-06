/* Write a program which accept string from user and display it in reverse order.

Input : “MarvellouS”
Output : “SuollevraM”

*/
#include<stdio.h>

void Reverse(char str[])
{
    int iStart=0;
    int iEnd=0;
    char itemp='\0';


    while(str[iEnd]!='\0')
    {
       iEnd++;;
    }
    iEnd--;

     while(iStart<iEnd)
       {
           itemp=str[iStart];
           str[iStart]=str[iEnd];
           str[iEnd]=itemp;

        iStart++;
        iEnd--;
       }
}

int main()
{
    char arr[30];

    printf("Enter string: \n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);
    printf("reverse string is %s",arr);

    return 0;
}
