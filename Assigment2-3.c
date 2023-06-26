#include<stdio.h>
// Accept one number from user and print that number of * on screen.

void Display(int iNo)
{
	if(iNo < 10)
	{
		printf("Hello");
	}
	else
	{
		printf("Demo");
	}
}
int main()
{
	int iValue =0 ;
	printf("Enter Number : \n");
	scanf("%d",&iValue);
	
	Display(iValue);

	return 0;
}