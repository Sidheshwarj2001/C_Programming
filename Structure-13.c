#include<stdio.h>

#pragma pack(1)
   struct Demo
    {
        int No  ;
        char ch;
        float f;
        int i;

    } ;

int main()
{
    struct Demo obj;

    printf("%d",sizeof(obj));

    return 0;
}