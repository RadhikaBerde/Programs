/* Accept N numbers from user and return the smallest number.

Input : N : 6
Elements : 85 66 3 66 93 88
Output : 3

*/

#include<stdio.h>
#include<stdlib.h>

int Smallest(int arr[],int iSize)
{
    int iMin=0;
    int iCnt=0;

    if(arr==NULL)
    {
        printf("Invalid Address");
        return 0;
    }
    if(iSize<0)
    {
        printf("Invalid Size");
        return 0;
    }
    iMin=arr[0];
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(arr[iCnt]<iMin)
        {
            iMin=arr[iCnt];
        }
    }
    return iMin;
}
int main()
{
    int *p=NULL;
    int iSize=0;
    int iRet=0;
    int i=0;

    printf("Enter size: ");
    scanf("%d",&iSize);

    if(iSize<0)
    {
        printf("Invalid Size");
        return -1;
    }

    p=(int*)malloc(sizeof(int)*iSize);

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elements: ");
    for(i=0;i<iSize;i++)
    {
        scanf("%d",&p[i]);
    }

     iRet=Smallest(p,iSize);

     printf("Smallest no is: %d",iRet);

     free(p);

     return 0;
}
