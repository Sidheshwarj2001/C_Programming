#include<stdio.h>

int main()
{   
    // Simple interestt and the maturity Amount

    float p , roi , t ,i , amt = 0 ;

    printf("Enter principle , rate of interest and time period\n");
    scanf("%f %f %f",&p, &roi ,&t);

    i = (p*roi  * t)/100;

    amt = p+i ;

    printf("Interest is : %f \n", i);

    printf(" Amount is : %f \n" , amt);


    return 0;
}