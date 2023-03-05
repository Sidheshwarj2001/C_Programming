#include<stdio.h>

struct Hello 
{
    int NO ;
    int x ;

   struct Demo
    {
        int i  ;
        float f;
    } dobj1,dobj2 ;
};

int main()
{
    struct Hello Hobj;

    Hobj.NO = 10;
    Hobj.x = 20;

    Hobj.dobj1.i  = 21;
    Hobj.dobj1.f = 1.2;

    Hobj.dobj2.f = 31;
    Hobj.dobj2.i  = 3.1;

    return 0;
}