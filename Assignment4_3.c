// Write a program which accept two numbers and check whether numbers are equal or not
#include<stdio.h>
#include<stdbool.h>

bool ChkEqual(int iNo1 , int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    bool bRet = false;

    printf("Please First enter number : \n");
    scanf("%d",&iValue1);

    printf("Please Second enter number : \n");
    scanf("%d",&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet == true)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }
    return 0;
}