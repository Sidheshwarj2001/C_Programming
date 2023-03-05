#include<stdio.h>

// typedef Old_name New_name ;

typedef const int CINT;

typedef unsigned int UINT;

int main()
{
     const int No = 11;
    CINT i = 11;

    printf("%d\n",i);

    unsigned int x = 21;
    UINT y = 51;

    printf("%d\n",x);

    return 0;
}