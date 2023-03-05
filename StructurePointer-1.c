#include <stdio.h>

struct Demo
{
    int i ;
    float f;
    int j;
};

int main()
{   
    //member by member initialization
    struct Demo obj1 = {10,2.14,21};

    struct Demo *ptr = &obj1;

    obj1.f=1.23;         //     .    direct member Access operator 
    ptr ->j = 51;        //    ->    indirect Member Access operator


    printf("%f\n",obj1.f);
    printf("%d\n",ptr->j);

    return 0;
}