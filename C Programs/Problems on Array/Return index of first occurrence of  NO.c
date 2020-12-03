/* Accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO.

Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 1

Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111

*/

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int arr[],int iLength,int iNo)
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
          return iCnt;
          break;
      }
  }

 return -1;
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

    iRet= FirstOcc(p,iSize,iNo);

    if(iRet == -1)
        {
            printf("There is no such number");
        }
    else
        {
            printf("First occurrence of number is %d",iRet);
        }

    free(p);
    return 0;
}


