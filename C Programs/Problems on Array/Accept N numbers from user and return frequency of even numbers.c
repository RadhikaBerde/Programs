/* Accept N numbers from user and return frequency of even numbers.

Input : N : 6
Elements : 85 66 3 80 93 88
Output : 3

*/

#include<stdio.h>
#include<stdlib.h>
#define EERMEMORY -1
#define EERSIZE -2

int CountEven(int arr[],int iLength)
{
    int iCnt=0;
    int iEvenCnt=0;

    if(arr == NULL)
     {
        return EERMEMORY;
     }

   if(iLength<=0)
    {
        return EERSIZE;
    }

    for(iCnt=0; iCnt<iLength;iCnt++)
     {
        if(arr[iCnt]%2==0)
            {
              iEvenCnt++;
            }
    }

    return iEvenCnt;
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
        printf("Error: Unable to allocate memory ");
        return -1;
     }

    printf("Enter the elements : \n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet=CountEven(p,iSize);

    if(iRet==EERMEMORY)
    {
        printf("Invalid memory address");
        return -1;
    }
    else if(iRet==EERSIZE)
    {
        printf("Invalid size");
        return -1;
    }
    else
    {
       printf("Frequency of even numbers is: %d\n",iRet);
    }

    free(p);
    return 0;
}

