#include<stdio.h>

   struct Demo
    {
        int No  ;
        struct Demo *ptr ; 
    } ;

int main()
{
    struct Demo *head;

    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;
    
    obj1.No = 11;
    obj2.No = 21;
    obj3.No = 31;

    obj1.ptr = &obj2; //200
    obj2.ptr = &obj3; //300
    obj3.ptr = NULL;

    head = &obj1; // pointer pointing to structure

    return 0;
}