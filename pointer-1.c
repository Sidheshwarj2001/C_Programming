#include <stdio.h>
int main()
{
    int No = 11;

    int * iptr  = &No;

    char ch = 'A';

    char *  cptr = &ch;

    double d = 83.23;

    double * dptr = &d;

    printf("%d\n",No);          //11
    printf("%c\n",ch);          // A
    printf("%f\n\n",d);           // 83.23


    printf("%d\n",&No);          // 200 
    printf("%d\n",&ch);           // 300
    printf("%d\n\n",&d);           // 500


    printf("%d\n",&iptr);           // 200
    printf("%d\n",&cptr);           // 400
    printf("%d\n\n",&dptr);           // 600


    printf("%d\n",*iptr);           // 11
    printf("%c\n",*cptr);           // A
    printf("%f\n\n",*dptr);           // 89.23


    printf("%d\n",sizeof(iptr));          // 4
    printf("%d\n",sizeof(cptr));          // 4
    printf("%d\n\n",sizeof(dptr));      // 4


    printf("%d\n",sizeof(*iptr));          // 4
    printf("%d\n",sizeof(*cptr));          // 1
    printf("%d\n\n",sizeof(*dptr)) ;     // 8

    return 0;
}