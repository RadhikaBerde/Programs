/* Accept N numbers from user and return difference between summation of even elements and summation of odd elements.

Input : N : 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181)

*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int arr[],int iLength)
{
  int iCnt=0;
  int iEven=0;
  int iOdd=0;

  if(arr==NULL)
    {
        printf("Invalid address ");
        return 0;
    }
  if(iLength<=0)
    {
    printf("Invalid Size");
    return 0;
    }

  for(iCnt=0; iCnt<iLength;iCnt++)
   {
      if(arr[iCnt]%2==0)
      {
          iEven=iEven+arr[iCnt];
      }
      else
      {
          iOdd=iOdd+arr[iCnt];
      }
  }
  return iEven-iOdd;
}

int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
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
       printf("Error: Unable to allocate memory\n");
       return -1;
    }

    printf("Enter the elements : \n");
    for(iCnt=0;iCnt<iSize;iCnt++)
       {
            scanf("%d",&p[iCnt]);
       }
   iRet=Difference(p,iSize);

   printf("Difference between summation of even & odd elements is: %d\n",iRet);

   free(p);

   return 0;
}
