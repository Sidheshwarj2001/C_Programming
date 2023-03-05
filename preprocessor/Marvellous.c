#include<stdio.h.>
#include  "PPA.h"


int main()  //Entry Point function
{
    struct Demo obj;

    printf("Inside the main funcation\n");

    printf("Rate of Interest is : %f\n",ROI); // 10.7
    printf("FEES of LOGIC BUIDING is : %d\n",FEES); //18200

    printf("Size of demo structure : %d\n",sizeof(obj));    //8

    return 0;
}