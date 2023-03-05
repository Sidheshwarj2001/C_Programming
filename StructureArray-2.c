#include <stdio.h>

struct Demo
{
    int i;
    float f;
};

int main()
{   
    struct Demo Arr[3];

    Arr[0].i = 11;
    Arr[0].f = 3.14;

    Arr[1].i = 21;
    Arr[1].f = 2.14;

    Arr[2].i = 41;
    Arr[2].f = 4.14;

    Arr[3].i = 51;
    Arr[3].f = 5.14;

    return 0;
}