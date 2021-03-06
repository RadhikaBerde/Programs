/* Accept N numbers from user and display all such elements which are even and divisible by 5.

Input : N : 6
Elements : 85 66 3 80 93 88
Output : 80

*/

#include<stdio.h>
#include<stdlib.h>

void Display (int arr[],int iLength)
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

    printf("No which are even and divisible by 5 are: \n");
    for(iCnt=0; iCnt<iLength;iCnt++)
      {
        if((arr[iCnt]%5==0) &&(arr[iCnt]%2==0))
          {
            printf("%d\t",arr[iCnt]);
          }
     }
}

int main()
{
    int iSize = 0;
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
        printf("Error: Unable to allocate memory ");
        return -1;
     }

    printf("Enter the elements : ");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    Display(p,iSize);

    free(p);

    return 0;
}
