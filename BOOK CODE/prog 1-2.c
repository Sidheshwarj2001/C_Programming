#include <stdio.h>

int main()
{
    float redius = 0;
    float Area = 0;
    float circum = 0;

    printf("Enter the Redius of the circle :");
    scanf("%f",&redius);

    Area = 2*22/7 *redius;

    circum = 22/7*redius*redius;

    printf("Area of circle is :   %6.2f\n",Area);
    printf("Circumference of circle is : %6.2f",circum);

    return 0;
}