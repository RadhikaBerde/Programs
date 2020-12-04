/* Accept N numbers from user and return the difference between largest and smallest number.

Input : N : 6
Elements : 85 66 3 66 93 88
Output : 90 (93 -3)

*/


#include<stdio.h>
#include<stdlib.h>
int Difference(int arr[], int iLength)
{
  int iCnt=0;
  int iMax=arr[0];
  int iMin=arr[0];

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

  for(iCnt=0; iCnt<iLength; iCnt++)
    {
      if(arr[iCnt]>iMax)
       {
          iMax=arr[iCnt];
       }
      else if(arr[iCnt]<iMin)
       {
          iMin=arr[iCnt];
       }
  }

    return iMax-iMin;
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

    iRet= Difference(p,iSize);

    printf("Difference is %d",iRet);

    free(p);

    return 0;
}
