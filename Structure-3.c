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

    struct Demo obj2 = {11,1.14,51};

    printf("%d\n",obj1.i);

    printf("%d\n",obj2.i);


    return 0;
}