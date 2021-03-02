//program to find no given by user divisible by 2 3 and 6 or not

#include <stdio.h>

int main()
{
	printf("Enter an integer:");
	int num;scanf("%d",&num);

	if (num%2==0)
	{
		printf("The number is divisible by 2\n");
	}

	if (num%3==0)
	{
		printf("The number is divisible by 3\n");
	}

	if (num%2==0 && num%3 ==0)
	{
		printf("The number is divisible by 6\n");
	}

	else 
	{
		printf("The number is not divisible by 2,3 or 6!\n");
	}

	return 0;
}