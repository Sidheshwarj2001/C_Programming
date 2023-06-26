#include<stdio.h>
// Accept one number from user and print that number of * on screen.

void Display(int iNo , int Frequency)
{
	int iCnt = 0;
	
	for(iCnt=1; iCnt <= Frequency ; iCnt++)
	{
		printf("%d\t",iNo);
	}
}
int main()
{
	int iValue =0 ;
	int iCount = 0;

	printf("Enter Number : \n");
	scanf("%d",&iValue);

	printf("Enter Frequency : \n");
	scanf("%d",&iCount);
	
	Display(iValue,iCount);

	return 0;
}