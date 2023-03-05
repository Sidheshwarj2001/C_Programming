#include<stdio.h>
#include<math.h>

int main()
{   
    // find the area of triangle
    float a , b , c , Area , side = 0;

    printf("Enter the sides of triangle : \n");
    scanf("%f %f %f",&a,&b,&c);

    side = (a+b+c)/2;

    Area = sqrt(side * (side - a)*(side - b) * (side - c));

    printf("The Area of circle is : %6.1f  sq .units ",Area);
    return 0;
}