// 2.Write a program which accept number from user and check whether it contains 0 in it or not.

#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit == 0)
        {
            return true;
        }
    }
    return false;
}  

int main()
{
    int iValue = 0;
    bool bRet = true;

    printf("Enter number \n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == true)
    {
        printf("It contain Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;
}