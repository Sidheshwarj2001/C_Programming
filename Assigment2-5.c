#include<stdio.h>
// Accept number from user and check wheather number is even or odd

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
	if(iNo % 2 == 0 )
	{
		return True;
	}
	else
	{
		return False;
	}

}

int main()
{
	int iValue = 0;
	BOOL bRet = False;

	printf("Enter Number : ");
	scanf("%d",&iValue);

	bRet = ChkEven(iValue);

	if(bRet == True)
	{
		printf("Number is Even");
	}
	else
	{
		printf("Number is Odd");
	}
}