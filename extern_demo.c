#include <stdio.h>

int A = 10;

extern int B;
extern int C;

int main()
{

    printf("Value of A is : %d\n",A);

    printf("Value of B is : %d\n",B);

    printf("Value of C is : %d\n",C);

    return 0;
}