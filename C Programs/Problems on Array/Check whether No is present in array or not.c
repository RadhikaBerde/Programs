/* Accept N numbers from user and accept one another number as NO,check whether NO is present or not.

Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : TRUE

Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : FALSE

*/


#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check(int arr[],int iLength,int iNo)
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
      if(arr[iCnt]==iNo)
         {
             return TRUE;
             break;
        }
  }
}



int main()
{
    int iSize = 0;
    int iNo=0;
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
    printf("Enter the number: \n");
    scanf("%d",&iNo);

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

    iRet=Check(p,iSize,iNo);

    if(iRet==TRUE)
     {
        printf("It contains No in it");
     }
    else
     {
        printf("It do not contains No in it");
     }

    free(p);

    return 0;
}




