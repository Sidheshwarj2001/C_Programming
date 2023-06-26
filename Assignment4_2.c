// Write a program which accept one number from user and check whether that number is greater than 100 or not
#include<stdio.h>
#include<stdbool.h>

bool chkGreater(int iNo)
{
    if(iNo > 100)
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
    int iValue = 0;
    bool bRet = false;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    bRet = chkGreater(iValue);

    if(bRet == true)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller");
    }
    return 0;
}