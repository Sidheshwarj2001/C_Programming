#include <stdio.h>

int main()
{
    float f ,c =0;

    printf("Enter the Temperature in the Fahrenheit : \n");
    scanf("%f",&f);

    c = 5.0/9.0*(f-32);

    printf("Temperature in celsius is %f",c); 
    return 0;
}