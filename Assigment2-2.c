#include<stdio.h>
// Accept one number from user and print that number of * on screen.
void Display(int iNo)
{
	while(iNo>0)
	{
		printf(" * ");
		iNo--;
	}
}

int main()
{
	int iValue = 0;
	printf("Enter number : \n");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}