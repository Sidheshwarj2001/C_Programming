#include<stdio.h>

void Display()
{
	int i =0;
	i = 5;
	
	for(int j = 1 ; j<=5;j++)
	{
		printf("%d\n",i);
		i--;
	}
}

int main()
{
	Display();

	return 0;
}