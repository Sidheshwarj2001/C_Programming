#include<stdio.h>

int main()
{
    double d = 1.234;

    printf("%d\n",d);

    double *dptr = &d;

    printf("%d\n",dptr); //address

    printf("%d\n",sizeof(dptr)); // 8bytes
    printf("%d\n",sizeof(*dptr));  //8Bytes

    return 0;
}