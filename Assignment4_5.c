// . Write a program which accept total marks & obtained marks from user and calculate percentage
#include<stdio.h>

float Percentage(float totalM , float obtainedM)
{
    float fTotal = 0.0f;
    fTotal = (obtainedM / totalM) * 100 ; 
    return fTotal;
}

int main()
{
    float iValue1 = 0 , iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks number : \n");
    scanf("%f",&iValue1);

    printf("Please Second obtained marks enter number : \n");
    scanf("%f",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf("%f",fRet);

    return 0;
}