#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[10];        //static memory allocation 

    int  size = 0;

    int *iptr  = NULL;

    printf(" Enter the size of array \n");
    scanf("%d",&size);

    // step 1 - : Allocate the memory
     iptr = (int *)calloc(sizeof(int) ,size );

     printf("size is : %d",sizeof(iptr));

    //  step2 use the memory 

    // step :-3  Deallocate the memory
    free(iptr);

    return 0;
}