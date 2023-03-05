#include<stdio.h>
int main()
{
    char cArr[4] = {'A','B','C','D'};   // size of array is 4bytes
    printf("%d\n",sizeof(cArr));

    int iArr[4]={1,2,3,4};  //size of array is 16bytes
    printf("%d\n",sizeof(iArr));

    float fArr[4]={1.1,10.1,20.7,20.2};    // size of array is 16bytes
    printf("%d\n",sizeof(fArr));

    double dArr[4] = {10.178,10.256,10.369,52.633};     //size of array is 32 bytes
    printf("%d\n",sizeof(dArr));

    printf("%d\n",iArr);  // base address 
    printf("%d\n",&iArr); // base address 
    printf("%d\n",&iArr[2]); //base address  of arr[2]

    int Arr[6] = { 10,20,30,40};

    printf("%d",sizeof(Arr));

    // int ArrNew[2] = { 10,20,30,40}; // throwing the error 

    // printf("%d",sizeof(ArrNew));
    return 0;
}