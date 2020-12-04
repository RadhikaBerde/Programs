/* Accept N numbers from user and accept Range, Display all elements from that range

Input : N : 6
Start: 60
End : 90
Elements : 85 66 3 76 93 88
Output : 85 66 76 88

Input : N : 6
Start: 30
End : 50
Elements : 85 66 3 76 93 88
Output :

*/

#include<stdio.h>
#include<stdlib.h>

void  Range(int arr[],int iLength,int iStart, int iEnd)
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

    printf("The elements in the given range are: ");
    for(iCnt=0; iCnt<=iLength;iCnt++)
      {
        if((arr[iCnt]>=iStart) && (arr[iCnt]<=iEnd))
         {
           printf("%d\t",arr[iCnt]);
         }
      }
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iValue1=0;
    int iValue2=0;
    int *p = NULL;

    printf("Enter the number of elements: \n");
    scanf("%d",&iSize);
    if(iSize==0)
     {
        printf("Invalid size");
        return -1;
     }

    printf("Enter the starting point: \n");
    scanf("%d",&iValue1);

    printf("“Enter the ending point: \n");
    scanf("%d",&iValue2);

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

     Range(p,iSize,iValue1, iValue2);

    free(p);

    return 0;
}








