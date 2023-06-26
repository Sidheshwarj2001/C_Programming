//1. Accept N numbers from user and return frequency of even numbers.

#include<stdio.h>
#include<stdlib.h>

int countEven(int Arr[],int iLength)
{
    int iCnt = 0;
    int iFrequncy = 0;
    
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] % 2 ==0)
        {
            iFrequncy = iFrequncy + Arr[iCnt];
        }
       
    }
    return (iFrequncy / iLength);
}

int main()
{
    int iSize = 0 , iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter element :  %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = countEven(p , iSize);
    printf("Frequncy of Even number is : %d\n",iRet);

    free(p);

    return 0;
}