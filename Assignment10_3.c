//1.. Accept N numbers from user check whether that numbers contains 11 in it or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool countEven(int Arr[],int iLength)
{
    int iCnt = 0;
    int iEven = 0 , iOdd = 0;
    bool bFlag = false;
    
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt]  == 11)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iSize = 0 , iCnt = 0;
    int *p = NULL;
    bool fRet = false;

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

    fRet = countEven(p , iSize);

    if(fRet == true)
    {
        printf("11 is Present \n ");
    }
    else
    {
        printf("11 is not present");
    }

    free(p);

    return 0;
}