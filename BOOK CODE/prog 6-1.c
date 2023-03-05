// A program to illustrate that the memory space required by a string literal constant is one more
#include <stdio.h>

int main()
{

    printf("Memory management of \"ABC \" is %d in bytes",(sizeof("ABC")));

    return 0;
}