#include <stdio.h>

struct Demo
{
    int i ;
    float f;
    int *ip;
    float *fp;

};

int main()
{   
    int No = 51;
    float f = 3.14;

    struct Demo obj;

    obj.i = 11;
    obj.f = 1.23;

    obj.ip = &No;
    obj.fp = &f;

    printf("%d\n",obj.i);
    printf("%f\n",obj.f);

    printf("%d\n", *(obj.ip));
    printf("%f\n", *(obj.fp));

    return 0;
}