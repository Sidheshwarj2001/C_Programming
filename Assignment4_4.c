// Write a program which accept three numbers and print its multiplication. 
#include<stdio.h>

int Multiply(int iNo1 , int iNo2 ,int iNo3)
{
    if(iNo1 == 0 & iNo2 == 0 & iNo3 == 0)
    {
        return 0;
    }

    if(iNo1==0)
    {
        iNo1++;
    }
    if(iNo2==0)
    {
        iNo2++;
    }
    if(iNo3==0)
    {
        iNo3++;
    }

    return iNo1 * iNo2 * iNo3 ;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 ,iValue3 = 0;
    int iRet = 0;

    printf("Please First enter number : \n");
    scanf("%d",&iValue1);

    printf("Please Second enter number : \n");
    scanf("%d",&iValue2);

    printf("Please third enter number : \n");
    scanf("%d",&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication is : %d\n",iRet);

    return 0;
}