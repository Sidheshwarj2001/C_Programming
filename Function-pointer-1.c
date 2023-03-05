#include <stdio.h>

int Addition(int Value1,int Value2)
{
    int Sum = 0;

    Sum = Value1 + Value2;

    return Sum;
}

int main()
{

    int No1 = 10;
    int No2 = 11;

    int ret = 0;
    
    // ret = Addition(No1,No2);

    // int *ptr (No1,No2);  //1000 Address from text section

    int (*ptr) (int ,int);

    ptr = Addition;

    ret  = ptr(No1,No2);

    printf("%d\n",ret);

    return 0;
}