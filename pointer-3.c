#include<stdio.h>

int main()
{
    char ch = 'A';

    int i = 11;

    float f = 1.2;

    double d = 1.234;

    void *vp  = NULL; 

    vp =&ch; 
    printf("%c\n",*(char * )vp);            //(char * ) ---> typecasting

    vp = &i;
    printf("%d\n",*(int *)vp);

    vp = &f;
    printf("%f\n",*(float *)vp);
    
    return 0;
}