//Write a program which accept number from user and return difference between summation of all its factors and non factors

#include<stdio.h>

int FactDiff(int iNo)
{
	int iCnt = 0;
	int iDiff = 0;
	int iSumFact = 0;
	int iSumNonFact = 0;
	
	for(iCnt = 1; iCnt <= iNo;iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			iSumFact = iSumFact + iCnt;
		}

		if(iNo % iCnt != 0)
		{
			iSumNonFact = iSumNonFact + iCnt;
		}
	}
	iDiff = iSumFact - iSumNonFact ;
	return iDiff;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter Number : \n");
	scanf("%d",&iValue);

	iRet = FactDiff(iValue);
	printf("Summation of Non Factor is  : %d\n",iRet);

	return 0;
}