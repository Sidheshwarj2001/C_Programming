#include<stdio.h>

int main()
{
    int standard = 0;

    printf("Enter your Standard : \n");
    scanf("%d",&standard);

    switch (standard)
    {
    case 1:
        printf("Your Exam is at 1 pm\n");
        break;

    case 2 :
        printf("Your Exam is at 2pm\n");
        break;

    case 3 :
        printf("Your Exam is at 3pm \n");
        break;

    case 4 :
        printf("Your Exam is at 4pm \n");
        break;

    default:
        printf("Invalid Standard\n");

    }
    return 0;
}