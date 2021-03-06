/* Accept N numbers from user and return frequency of 11 form it.

Input : N : 6
Elements : 85 66 3 15 93 88
Output : 0

Input : N : 6
Elements : 85 11 3 15 11 111
Output : 2

*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int arr[],int iLength)
{
  int iCnt=0;
  int iFreq=0;

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
                iFreq++;
              }
        }
  return iFreq;

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

    printf("frequency of 11 is : %d",iRet);

    free(p);

    return 0;
}
