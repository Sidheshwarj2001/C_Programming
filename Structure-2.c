#include <stdio.h>

struct Demo
{
    int i ;
    float f;
    int j;
}obj1,obj2;

int main()
{

    obj1.i=10;
    obj1.f=90.2;
    obj1.j=11;

    obj2.i=20;
    obj2.f=20.2;
    obj2.j=21;

    printf("%d\n",obj1.i);

    printf("%d\n",obj2.i);


    return 0;
}