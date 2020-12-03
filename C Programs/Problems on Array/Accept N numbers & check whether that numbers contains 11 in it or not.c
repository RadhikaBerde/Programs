/* Accept N numbers from user check whether that numbers contains 11 in it or not.

Input : N : 6
Elements : 85 66 11 80 93 88
Output : 11 is present

*/

#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int arr[],int iLength)
{
  int iCnt=0;

  if(arr == NULL)
    {
        printf("Invalid address ");
        return 0;
    }
  if(iLength<=0)
    {
        printf("Invalid size");
        return 0;
    }
  for(iCnt=0; iCnt<iLength;iCnt++)
   {
      if(arr[iCnt]==11)
         {
             return TRUE;
             break;
         }
  }

}

int main()
{
int iSize = 0;
int iCnt = 0;
int iRet=0;
int *p = NULL;

printf("Enter the number of elements: \n");
scanf("%d",&iSize);

if(iSize==0)
{
    printf("Invalid size");
    return -1;
}

p=(int *)malloc(iSize * 4);
if(p==NULL)
{
    printf("unable to allocate memory ");
    return -1;
}

printf("Enter the elements : ");
for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    iRet=Check(p,iSize);

    if(iRet==TRUE)
    {
        printf("It contains 11 in it");
    }
    else
    {
        printf("It do not contains 11 in it");
    }

    free(p);

    return 0;
}

