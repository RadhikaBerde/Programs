/*2. Accept N numbers from user and return difference between frequency of even number and odd numbers.

Input : N : 7
Elements : 85 66 3 80 93 88 90
Output : 1 (4 -3)

*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int arr[],int iLength)
{
  int iCnt=0;
  int iEvenCnt=0;
  int iOddCnt=0;

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
      if(arr[iCnt]%2==0)
         {
             iEvenCnt++;
         }
      else
         {
              iOddCnt++;
         }
  }

    return iEvenCnt-iOddCnt;
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

    iRet=Frequency(p,iSize);
    printf("frequency of even numbers is: %d\n",iRet);

    free(p);

    return 0;
}
