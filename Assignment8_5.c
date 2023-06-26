// 5.Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenSummation = 0;
    int iOddSummation = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10 ;
        if(iDigit % 2 == 0)
        {
            iEvenSummation = iEvenSummation + iDigit;
        }
        if(iDigit % 2 != 0)
        {
            iOddSummation = iOddSummation + iDigit;
        }

        iNo = iNo / 10;
    }
    return iEvenSummation - iOddSummation;
}  

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Diff between Summation of odd and even digit is : %d",iRet);

    return 0;
}