#include <stdio.h>

int main()
{
    int Arr[5] = { 10,20,30,40,50};

    printf("%d\n",Arr[4]); //40
    printf("%d\n",Arr[2]); //30

    //empty array

    int Arr1[4];

    Arr1[0]=11;
    Arr1[1]=21;
    Arr1[2]=51;
    Arr1[3]=101;
    
    printf("%d\n",&Arr1);
    printf("%d\n",&Arr);

    return 0;
}