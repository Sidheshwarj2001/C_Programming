#include<stdio.h>

int main()
{
    int No1 = 0,  No2 = 0, Ans = 0;

    printf("Enter first number \n");
    scanf("%d",&No1);

    printf("Enter Second number\n");
    scanf("%d",&No2);

    Ans = No1 + No2;

    printf("Addition is : %d\n" , Ans);

    printf("Address of Ans is : %d",&Ans); //print the address of Ans variable

    return 0;
}