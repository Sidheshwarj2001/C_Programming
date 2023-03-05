#include<stdio.h>

int main()
{
    int Arr[5] = {1,2,3,4,5};

    int *p = &(Arr[0]);

    int *q = &(Arr[2]);

   int  oper = *p+4;
    printf("%d",oper);

    printf("\n%d",*p);
    printf("\n%d",p);

    return 0;
}