/* Accept N numbers from user and display all such numbers which contains 3 digits in it.

Input : N : 6
Elements : 8225 665 3 76 953 858
Output : 665 953 858

*/

#include<stdio.h>
#include<stdlib.h>

void Display(int arr[],int iSize)

{
    int i=0;
    int iDigit=0;
    int iCnt=0;

    for(i=0;i<iSize;i++)
    {
        iDigit=arr[i];
        iCnt=0;

        while(iDigit!=0)
        {
            iDigit=iDigit/10;
            iCnt++;
        }

            if(iCnt==3)
            {
               printf("%d\t",arr[i]);
            }
     }
}

int main()
{
    int iSize=0;
    int *ptr=NULL;
    int i=0;

    printf("Enter size of array: \n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*(sizeof(int)));

    printf("Enter elements of array: \n");
    for(i=0;i<iSize;i++)
    {
        scanf("%d",&ptr[i]);
    }

    Display(ptr,iSize);

    free(ptr);

    return 0;
}
