#include<stdio.h>

   union Demo
    {
        int No ;
        float f;
        double d;

    } ;

int main()
{
    union Demo obj;

    obj.No = 11;

    printf("%d\n",sizeof(obj));

    printf(" %d\n",obj.No);

    obj.f = 1.2;

    printf("%f\n",obj.f);

    // printf("\n %d",obj.No);

    return 0;
}