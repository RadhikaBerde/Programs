/* Accept division of student from user and depends on the division display exam timing. There are 4 divisions in school as A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)

Input : C
Output : Your exam at 9.20 AM

Input : d
Output : Your exam at 10.30 AM

*/

#include<stdio.h>

void DisplaySchedule(char chDiv)
{

    switch(chDiv)
    {
        case 'A':  case 'a':
            printf("Exam of division A at 7 AM");
            break;
        case 'B': case 'b':
            printf("Exam of division B at 8.30 AM");
            break;
        case 'C': case 'c':
            printf("Exam of division C at 9.20 AM");
            break;
        case 'D': case 'd':
            printf("Exam of division D at 10.30 AM");
            break;
    }
}

int main()
{
    char cValue='\0';
    printf("Enter the division of student:  ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}
