#include<stdio.h>

int main()
{   
    // find the avarage of three number
    float No1,No2,No3 ,  Avg ;

    // printf("Enter first Number \n");
    // scanf("%f",&No1);

    // printf("Enter first Number \n");
    // scanf("%f",&No2);

    // printf("Enter first Number \n");
    // scanf("%f",&No3);

    printf("Enter three Number \n");
    scanf("%f%f%f",&No1,&No2,&No3);

    Avg = (No1 + No2 + No3) / 3;

    printf("The Avarage of three number is : %f",Avg);


    return 0;
}