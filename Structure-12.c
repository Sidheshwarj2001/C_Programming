#include<stdio.h>

   struct Demo
    {
        int No  ;
        char ch;
        char ch1;
        float f;
        int i;
        char ch2;
        double d;

    } ;

int main()
{
    struct Demo obj;

    printf("%d",sizeof(obj));

    printf("\n%d",sizeof(obj.No));
    printf("\n%d",sizeof(obj.ch));
    printf("\n%d",sizeof(obj.ch1));
    printf("\n%d",sizeof(obj.f));
    printf("\n%d",sizeof(obj.i));
    printf("\n%d",sizeof(obj.ch2));
    printf("\n%d",sizeof(obj.d));

    return 0;
}