/* Accept N numbers from user and return product of all odd elements.

Input : N : 6
Elements : 15 66 3 70 10 88
Output : 45

Input : N : 6
Elements : 44 66 72 70 10 88
Output : 0

*/

#include<stdio.h>
#include<stdlib.h>

int Product(int arr[],int iLength)
{
  int iCnt=0;
  int iProduct=1;
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
      if(arr[iCnt]%2!=0)
       {
          iProduct=iProduct*(arr[iCnt]);
       }
  }
  if(arr[iCnt]%2==0)
  {
      return -1;
  }

  return iProduct;
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

     iRet=Product(p,iSize);

     if(iRet==-1)
     {
         printf("Product is: 0");
     }
     else
     {
        printf("Product is %d",iRet);
     }


    free(p);

    return 0;
}








